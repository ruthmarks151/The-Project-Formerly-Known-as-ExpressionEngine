//
// Created by ryan on 02/12/15.
//

#include "MultiplicationExpression.h"
#include <string>
#include <iostream>


MultiplicationExpression::MultiplicationExpression(){
    left = nullptr;
    right = nullptr;
};


std::string MultiplicationExpression::evaluate() {
    return "Multiplication evaluated!";
}


float MultiplicationExpression::convert(std::string s) {
    return 0;
}

void MultiplicationExpression::print() {
    std::cout << "This is an arithmetic expression!" << std::endl;
}
