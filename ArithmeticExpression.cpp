#include "ArithmeticExpression.h"

ArithmeticExpression::ArithmeticExpression() {

}


ArithmeticExpression::ArithmeticExpression(Expression *givenLeft, Expression *givenRight) {
    left = givenLeft;
    right = givenRight;
}
