#include "Div.hpp"

Div::Div(){}

Div::Div(string theName, int theCode, int theLength, int theOperand1, int theOperand2): Instruction(theName, theCode, theLength)
{
	operand1 = theOperand1;
	operand2 = theOperand2;
}

int Div::getOperand1()
{
	return operand1;
}

int Div::getOperand2()
{
	return operand2;
}