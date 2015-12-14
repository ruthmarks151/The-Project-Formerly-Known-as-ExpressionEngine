/*
 * Names: Ryan Marks, Nishanth Balamohan, Sophia Lu
 * MAC ID: MARKSR2, BALAMON, LUY27
 * Student Number: 001406077, 001411319, 001428072
 * Description: Contains the main function of the program
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Multiplication.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Division.h"
#include "LiteralExpression.h"
#define NO_OP_FOUND -1
using namespace std;

bool isOp(char c){
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string removeCharsFromString( string str, char charToRemove ) {
    string out = "";
    for (int i = 0; i < str.length(); i++){
        if (str[i] != charToRemove)
            out = out + str[i];
    }
    return out;

}

Expression* toExpression(string expression) throw(exception){
    int parenDepth = 0;
    int firstLowPresedenceOperator = NO_OP_FOUND;
    int firstHighPresedenceOperator = NO_OP_FOUND;
    char cbefore = expression[0];
    if (cbefore == '(') {
            parenDepth++;
    }
    for (int i = 1; i < expression.length(); i++) {
        char c = expression[i];
        switch (c) {
            case '(':
                parenDepth++;
                break;
            case ')':
                parenDepth--;
                break;
            case '-':
            case '+':
                if (!(cbefore == '(' || isOp(cbefore))) {
                    if (parenDepth == 0) {
                        firstLowPresedenceOperator = i;
                    }
                }
                break;
            case '*':
            case '/':
                if (firstHighPresedenceOperator == NO_OP_FOUND) {
                    if (parenDepth == 0) {
                        firstHighPresedenceOperator = i;
                    }
                }
                break;
        }
        //if (parenDepth<0)
            //throw exception();
        cbefore = c;
    }

    //if (parenDepth != 0)
        //throw exception();
    int splitPoint = firstLowPresedenceOperator;
    if (firstLowPresedenceOperator == NO_OP_FOUND)
        splitPoint = firstHighPresedenceOperator;
    if (splitPoint == NO_OP_FOUND) {
        try {
            double num = stof(expression);
            return new LiteralExpression(num);
        }catch (const exception& ia) {
            expression = expression.substr(1,expression.length()-2);
            return toExpression(expression);
        }
    }
    string leftStr = expression.substr(0,splitPoint);
    string rightStr = expression.substr(splitPoint+1,expression.length());
    Expression * leftExp = toExpression(leftStr);
    Expression * rightExp = toExpression(rightStr) ;
    char op = expression[splitPoint];
    switch(op){
        case '+':
            return new Addition(leftExp,rightExp);
        case '-':
            return new Subtraction(leftExp, rightExp);
        case '*':
            return new Multiplication(leftExp,rightExp);
        case '/':
            return new Division(leftExp,rightExp);
        default:
            throw exception();
    }
}

int main() {
    string expression;
    Expression * currentExp;

    while (true) {
        getline(cin, expression);
        if (expression == "@") {
            Expression * tempExp = currentExp->clone();
            delete currentExp;
            currentExp = tempExp;
            currentExp->increment();
        }else {
            expression = removeCharsFromString(expression, ' ');
            currentExp = toExpression(expression);
        }
        cout << currentExp->evaluate() << endl;
    }
    return 0;
}
