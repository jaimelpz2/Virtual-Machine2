#ifndef Mult_HPP
#define Mult_HPP
#include "Instruction.hpp"
#include <string>

using namespace std;
class Mult: public Instruction 
{
	private:
		int operand1;
		int operand2;
	public:
		Mult();
		Mult(string theName, int theCode, int theLength, int theOperand1, int theOperand2);
		int getOperand1();
		int getOperand2();


};
#endif