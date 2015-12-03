#include "Addition.h"
#include <iostream>

Addition::Addition(){
    left = nullptr;
    right = nullptr;
};


Addition::Addition(Expression *givenLeft, Expression *givenRight) : ArithmeticExpression(givenLeft,givenRight) {

}

std::string Addition::evaluate(){
    return std::to_string(std::stof(left->evaluate().c_str()) + std::stof(right->evaluate().c_str()));
}

float Addition::convert(std::string s){
    return 0;
}

void Addition::print(){
    std::cout << "This is an arithmetic expression(addition)!" << std::endl;
}