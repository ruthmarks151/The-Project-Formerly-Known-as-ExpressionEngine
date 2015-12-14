#ifndef EXPRESSIONENGINE_EXPRESSION_H
#define EXPRESSIONENGINE_EXPRESSION_H

#include <string>

class Expression{
public:
    virtual Expression * clone() = 0;
    virtual std::string evaluate() = 0;
    virtual void print() = 0;
    virtual void increment() = 0;
    virtual ~Expression(){};
};


#endif //EXPRESSIONENGINE_EXPRESSION_H
