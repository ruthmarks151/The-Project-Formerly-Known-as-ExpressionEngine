#include "Subtraction.h"
#include <string>
#include <iostream>


Subtraction::Subtraction(){
    left = nullptr;
    right = nullptr;
};

std::string Subtraction::evaluate(){
    return "Subtraction Evaluated!";
}

float Subtraction::convert(std::string s){
    return 0;
}

void Subtraction::print(){
    std::cout << "This is an arithmetic expression(subtraction)!" << std::endl;
}
