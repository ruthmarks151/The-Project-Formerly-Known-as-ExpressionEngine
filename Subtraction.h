#ifndef EXPRESSIONENGINE_SUBTRACTIONTION_H
#define EXPRESSIONENGINE_SUBTRACTIONTION_H
#include "ArithmeticExpression.h"

class Subtraction: public ArithmeticExpression{
public:
    Subtraction();
    Subtraction(Expression * givenLeft, Expression * givenRight);
    virtual std::string evaluate();
    virtual Expression *clone();
    virtual float convert (std::string s);
    virtual void print();

    virtual std::string to_string();
};

#endif //EXPRESSIONENGINE_SUBTRACTION_H

