#include "Addition.h"
#include "ArithmeticExpression.h"
#include <iostream>

Addition::Addition(){
    left = nullptr;
    right = nullptr;
};

std::string Addition::evaluate(){
    return "Addition Evaluated!";
}

float Addition::convert(std::string s){
    return 0;
}

void Addition::print(){
    std::cout << "This is an arithmetic expression(addition)!" << std::endl;
}