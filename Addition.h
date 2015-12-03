#ifndef EXPRESSIONENGINE_ADDITION_H
#define EXPRESSIONENGINE_ADDITION_H
#include "ArithmeticExpression.h"

class Addition: public ArithmeticExpression{
public:
    Addition();
    virtual std::string evaluate();
    virtual float convert (std::string s);
    virtual void print();
};

#endif //EXPRESSIONENGINE_ADDITION_H
