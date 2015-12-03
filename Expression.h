#ifndef EXPRESSIONENGINE_EXPRESSION_H
#define EXPRESSIONENGINE_EXPRESSION_H

#include <string>

class Expression{
public:
    virtual std::string evaluate() = 0;
    virtual void print() = 0;
};


#endif //EXPRESSIONENGINE_EXPRESSION_H
