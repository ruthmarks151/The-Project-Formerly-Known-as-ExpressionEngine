#include "Division.h"
#include <iostream>

Division::Division(){
    left = nullptr;
    right = nullptr;
};

std::string Division::evaluate() {
    return "Division Evaluated!";
}

float Division::convert(std::string s) {
    return 0;
}

void Division::print(){
    std::cout<<"This is an Arithmetic Expression(division)" << std::endl;
}