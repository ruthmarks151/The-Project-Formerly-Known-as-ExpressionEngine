#ifndef EXPRESSIONENGINE_ADDITION_H
#define EXPRESSIONENGINE_ADDITION_H
#include "ArithmeticExpression.h"

class Addition: public ArithmeticExpression{
public:
    Addition();
    Addition(Expression *givenLeft, Expression *givenRight);
    virtual std::string evaluate();
    virtual Expression * clone();
    virtual float convert (std::string s);
    virtual void print();

    virtual std::string to_string();
};

#endif //EXPRESSIONENGINE_ADDITION_H
