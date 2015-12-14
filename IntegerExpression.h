//
// Created by ryan on 02/12/15.
//

#ifndef EXPRESSIONENGINE_LITERALEXPRESSION_H
#define EXPRESSIONENGINE_LITERALEXPRESSION_H

#include "Expression.h"

class IntegerExpression : public Expression{
private:
    int value;
public:
    IntegerExpression(int givenValue);
    virtual std::string evaluate();
    virtual void print();

    virtual void increment();

    virtual Expression *clone();

    virtual std::string to_string();
};


#endif //EXPRESSIONENGINE_LITERALEXPRESSION_H
