/*
 * Names: Ryan Marks, Nishanth Balamohan, Sophia Lu
 * MAC ID: MARKSR2, BALAMON, LUY27
 * Student Number: 001406077, 001411319, 001428072
 * Description: Arithmetic Expression
 */
#include "ArithmeticExpression.h"

ArithmeticExpression::ArithmeticExpression() {
}


ArithmeticExpression::ArithmeticExpression(Expression *givenLeft, Expression *givenRight) {
    left = givenLeft;
    right = givenRight;
}
