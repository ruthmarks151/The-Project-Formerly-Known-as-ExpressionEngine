/*
 * Names: Ryan Marks, Nishanth Balamohan, Sophia Lu
 * MAC ID: MARKSR2, BALAMON, LUY27
 * Student Number: 001406077, 001411319, 001428072
 * Description: The literal expression class that evaluates literals
 */
#include <iostream>
#include "IntegerExpression.h"

IntegerExpression::IntegerExpression(int givenValue) {
    value = givenValue;
}

std::string IntegerExpression::evaluate() {
    return std::to_string(value);
}

void IntegerExpression::print() {
    std::cout << this->evaluate();
}

Expression *IntegerExpression::clone() {
    return new IntegerExpression(value);
}

void IntegerExpression::increment() {
    value++;
}


std::string IntegerExpression::to_string() {
    if (value < 0)
        return "("+std::to_string(value)+")";
    return std::to_string(value);
}
