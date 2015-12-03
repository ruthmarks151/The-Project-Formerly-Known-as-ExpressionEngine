//
// Created by ryan on 02/12/15.
//

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
