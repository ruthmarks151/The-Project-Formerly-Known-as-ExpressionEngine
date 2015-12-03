#include "Division.h"
#include <iostream>
#include <string>

Division::Division(){
    left = nullptr;
    right = nullptr;
};


Division::Division(Expression *givenLeft, Expression *givenRight) : ArithmeticExpression(givenLeft,givenRight) {

}

std::string Division::evaluate() {
    return std::to_string(std::stof(left->evaluate().c_str()) / std::stof(right->evaluate().c_str()));
}

float Division::convert(std::string s) {
    return 0;
}

void Division::print(){
    std::cout<<"This is an Arithmetic Expression(division)" << std::endl;
}