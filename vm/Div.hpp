#ifndef Div_HPP
#define Div_HPP
#include "Instruction.hpp"
#include <string>

using namespace std;
class Div: public Instruction 
{
	private:
		int operand1;
		int operand2;
	public:
		Div();
		Div(string theName, int theCode, int theLength, int theOperand1, int theOperand2);
		int getOperand1();
		int getOperand2();


};
#endif