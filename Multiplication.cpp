//
// Created by ryan on 02/12/15.
//

#include "Multiplication.h"
#include <string>
#include <iostream>


Multiplication::Multiplication(){
    left = nullptr;
    right = nullptr;
};

Multiplication::Multiplication(Expression *givenLeft, Expression *givenRight) : ArithmeticExpression(givenLeft, givenRight) {

}

std::string Multiplication::evaluate() {
    return std::to_string(std::stof(left->evaluate().c_str()) * std::stof(right->evaluate().c_str()));
}


float Multiplication::convert(std::string s) {
    return 0;
}

void Multiplication::print() {
    std::cout << "This is an arithmetic expression! (Multiplication!)" << std::endl;
}

