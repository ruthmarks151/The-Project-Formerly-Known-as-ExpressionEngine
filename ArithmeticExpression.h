//
// Created by Nishanth on 12/2/2015.
#ifndef EXPRESSIONENGINE_ARITHMETICEXPRESSION_H
#define EXPRESSIONENGINE_ARITHMETICEXPRESSION_H

#include "Expression.h"
#include <string>
class ArithmeticExpression : public Expression{
protected:
    Expression *left;
    Expression *right;
public:
    virtual std::string evaluate () = 0;
    virtual float convert (std::string s) = 0;
};
#endif //EXPRESSIONENGINE_ARITHMETICEXPRESSION_H
