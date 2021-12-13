#include "Mult.hpp"

Mult::Mult(){}

Mult::Mult(string theName, int theCode, int theLength, int theOperand1, int theOperand2): Instruction(theName, theCode, theLength)
{
	operand1 = theOperand1;
	operand2 = theOperand2;
}

int Mult::getOperand1()
{
	return operand1;
}

int Mult::getOperand2()
{
	return operand2;
}