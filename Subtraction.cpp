#include "Subtraction.h"
#include <iostream>

Subtraction::Subtraction(){ //Default constructor, should not be used
    left = nullptr; // Making the left a null pointer
    right = nullptr; // Making the right a null pointer
};


Subtraction::Subtraction(Expression *givenLeft, Expression *givenRight) : ArithmeticExpression(givenLeft,givenRight){ // addition taking in parameters

}

std::string Subtraction::evaluate(){
    return std::to_string(std::stof(left->evaluate().c_str()) - std::stof(right->evaluate().c_str())); //takes in the values, performs subtraction and turns then answer from a double to a string
}

float Subtraction::convert(std::string s){ //converts string into a float
    return 0;
}

void Subtraction::print(){
    std::cout << "This is an arithmetic expression(subtraction)!" << std::endl; //used in testing
}
