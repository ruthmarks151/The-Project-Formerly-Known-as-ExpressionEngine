/*
 * Names: Ryan Marks, Nishanth Balamohan, Sophia Lu
 * MAC ID: MARKSR2, BALAMON, LUY27
 * Student Number: 001406077, 001411319, 001428072
 * Description: the multiplication class
 */
#include "Multiplication.h"
#include <string>
#include <iostream>


Multiplication::Multiplication(){ //default constructor, should not be used
    left = nullptr;  //makes the left a null pointer
    right = nullptr; //makes the right a null pointer
};

Multiplication::Multiplication(Expression *givenLeft, Expression *givenRight) : ArithmeticExpression(givenLeft, givenRight) {  // Multiplication taking in parameters

}

std::string Multiplication::evaluate() {
    return std::to_string(std::stof(left->evaluate().c_str()) * std::stof(right->evaluate().c_str())); // takes in values and performs multiplication. The result is converted from a double to a string
}


float Multiplication::convert(std::string s) { //converts string to a float
    return 0;
}

void Multiplication::print() {
    std::cout << "This is an arithmetic expression! (Multiplication!)" << std::endl;  //Used in testing
}

std::string Multiplication::to_string() {
    return "( "+ left->to_string() + " * " + right->to_string() + " )";

}

Expression *Multiplication::clone() {
    return new Multiplication(left->clone(),right->clone());

}
