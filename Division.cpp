#include "Division.h"
#include <iostream>

Division::Division(){
    left = nullptr;
    right = nullptr;
};


Division::Division(Expression *givenLeft, Expression *givenRight) : ArithmeticExpression(givenLeft,givenRight) {

}

std::string Division::evaluate() {
    return "Division Evaluated!";
}

float Division::convert(std::string s) {
    return 0;
}

void Division::print(){
    std::cout<<"This is an Arithmetic Expression(division)" << std::endl;
}