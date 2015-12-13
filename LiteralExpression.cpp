/*
 * Names: Ryan Marks, Nishanth Balamohan, Sophia Lu
 * MAC ID: MARKSR2, BALAMON, LUY27
 * Student Number: 001406077, 001411319, 001428072
 * Description: The literal expression class that evaluates literals
 */
#include <iostream>
#include "LiteralExpression.h"

LiteralExpression::LiteralExpression(float givenValue) {
    value = givenValue;
}

std::string LiteralExpression::evaluate() {
    return std::to_string(value);
}

void LiteralExpression::print() {
    std::cout << this->evaluate();
}
