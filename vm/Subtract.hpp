
#ifndef Subtract_HPP
#define Subtract_HPP
#include "Instruction.hpp"
#include <string>

using namespace std;
class Subtract: public Instruction 
{
	private:
		int operand1;
		int operand2;
	public:
		Subtract();
		Subtract(string theName, int theCode, int theLength, int theOperand1, int theOperand2);
		int getOperand1();
		int getOperand2();


};
#endif