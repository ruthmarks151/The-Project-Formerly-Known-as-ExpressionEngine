#ifndef EXPRESSIONENGINE_ARITHMETICEXPRESSION_H
#define EXPRESSIONENGINE_ARITHMETICEXPRESSION_H

#include "Expression.h"
#include <string>
class ArithmeticExpression : public Expression{
protected:
    Expression *left;
    Expression *right;
public:
    ArithmeticExpression();
    ArithmeticExpression(Expression* givenLeft, Expression* givenRight);
    ~ArithmeticExpression();

    virtual void increment();
    virtual Expression * clone() = 0;
    virtual std::string evaluate () = 0;
    virtual std::string to_string() = 0;
    virtual float convert (std::string s) = 0;
    virtual void print() = 0;
};
#endif //EXPRESSIONENGINE_ARITHMETICEXPRESSION_H
