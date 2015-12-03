#include "Subtraction.h"
#include <iostream>

Subtraction::Subtraction(){
    left = nullptr;
    right = nullptr;
};


Subtraction::Subtraction(Expression *givenLeft, Expression *givenRight) : ArithmeticExpression(givenLeft,givenRight){

}

std::string Subtraction::evaluate(){
    return std::to_string(std::stof(left->evaluate().c_str()) - std::stof(right->evaluate().c_str()));
}

float Subtraction::convert(std::string s){
    return 0;
}

void Subtraction::print(){
    std::cout << "This is an arithmetic expression(subtraction)!" << std::endl;
}
