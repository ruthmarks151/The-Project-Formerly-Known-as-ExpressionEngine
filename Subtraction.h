#ifndef EXPRESSIONENGINE_SUBTRACTIONTIONEXPRESSION_H
#define EXPRESSIONENGINE_SUBTRACTIONTIONEXPRESSION_H
#include "ArithmeticExpression.h"

class Subtraction: public ArithmeticExpression{
public:
    Subtraction();
    virtual std::string evaluate ();
    virtual float convert (std::string s);
    virtual void print();
};

#endif //EXPRESSIONENGINE_SUBTRACTIONEXPRESSION_H

