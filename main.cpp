#include <iostream>
#include <string>
#include <vector>
#include "Multiplication.h"
#include "Addition.h"
#include "Subtraction.h"
#include "LiteralExpression.h"
#define NO_OP_FOUND -1
using namespace std;

bool isOp(char c){
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string splitExpression(string expression) throw(exception){
    int parenDepth = 0;
    int firstLowPresedenceOperator = NO_OP_FOUND;
    int firstHighPresedenceOperator = NO_OP_FOUND;
    char cbefore = expression[0];
    if (cbefore == '(')
        parenDepth++;
    for (int i = 1; i < expression.length() &&  (firstLowPresedenceOperator == NO_OP_FOUND); i++) {
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
        cbefore = c;
    }

    if (parenDepth != 0)
    	throw exception();
        int splitPoint = firstLowPresedenceOperator;
        if (firstLowPresedenceOperator == NO_OP_FOUND)
            splitPoint = firstHighPresedenceOperator;

        string left = expression.substr(0,splitPoint);
        string right = expression.substr(splitPoint+1,expression.length());
        char op = expression[splitPoint];

        cout << '"' << left << '"' << op << '"' << right << '"' << endl;

}

int main() {
    string expression;
    Multiplication * m = new Multiplication();
    Addition * n = new Addition();
    Subtraction * x = new Subtraction();
    LiteralExpression * l = new LiteralExpression(3.14);
    m->print();
    n->print();
    l->print();
    x->print();
    
    while (true) {
        getline(cin, expression);
        splitExpression(expression);
    }
    return 0;
}
