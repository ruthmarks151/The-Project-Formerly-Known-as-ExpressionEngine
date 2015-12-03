//
// Created by ryan on 02/12/15.
//

#ifndef EXPRESSIONENGINE_LITERALEXPRESSION_H
#define EXPRESSIONENGINE_LITERALEXPRESSION_H

#include "Expression.h"

class LiteralExpression : public Expression{
private:
    float value;
public:
    LiteralExpression(float givenValue);
    virtual std::string evaluate();
    virtual void print();
};


#endif //EXPRESSIONENGINE_LITERALEXPRESSION_H
