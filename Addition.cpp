/*
 * Names: Ryan Marks, Nishanth Balamohan, Sophia Lu
 * MAC ID: MARKSR2, BALAMON, LUY27
 * Student Number: 001406077, 001411319, 001428072
 * Description: The Addition class
 */
#include "Addition.h"
#include <iostream>
#include <string>

Addition::Addition(){//Default constructor, should not be used
    left = nullptr;// Making the left a null pointer
    right = nullptr;// Making the right a null pointer
};


Addition::Addition(Expression *givenLeft, Expression *givenRight) : ArithmeticExpression(givenLeft,givenRight) {//Addition taking in parameters

}

std::string Addition::evaluate(){
    return std::to_string(std::stof(left->evaluate().c_str()) + std::stof(right->evaluate().c_str()));//Takes in the values and adds them while converting and returning from a double to a string
}

float Addition::convert(std::string s){//Converts the string into a float
    return 0;
}

void Addition::print(){
    std::cout << "This is an arithmetic expression(addition)!" << std::endl;//Used in testing
}