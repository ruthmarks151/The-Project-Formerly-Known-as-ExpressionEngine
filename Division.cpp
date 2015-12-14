/*
 * Names: Ryan Marks, Nishanth Balamohan, Sophia Lu
 * MAC ID: MARKSR2, BALAMON, LUY27
 * Student Number: 001406077, 001411319, 001428072
 * Description: The division class
 */
#include "Division.h"
#include <iostream>
#include <string>

Division::Division(){//The default constructor which should not be used
    left = nullptr;//Making the left pointer null
    right = nullptr;//Making the right pointer null
};


Division::Division(Expression *givenLeft, Expression *givenRight) : ArithmeticExpression(givenLeft,givenRight) {//Division taking in parameters

}

std::string Division::evaluate() {
    return std::to_string(std::stof(left->evaluate().c_str()) / std::stof(right->evaluate().c_str()));//Divides the values while converting and returning a string
}

float Division::convert(std::string s) {//Converts from a string to a float
    return 0;
}

void Division::print(){
    std::cout<<"This is an Arithmetic Expression(division)" << std::endl;//Used in testing
}

Expression *Division::clone() {
    return new Division(left->clone(),right->clone());
}
