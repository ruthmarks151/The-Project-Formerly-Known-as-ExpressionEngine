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


std::string Multiplication::evaluate() {
    return "Multiplication evaluated!";
}


float Multiplication::convert(std::string s) {
    return 0;
}

void Multiplication::print() {
    std::cout << "This is an arithmetic expression!" << std::endl;
}

Multiplication::Multiplication(Expression *givenLeft, Expression *givenRight) : ArithmeticExpression(givenLeft, givenRight) {

}
