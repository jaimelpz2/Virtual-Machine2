#include "Instruction.hpp"

#ifndef STO_HPP
#define STO_HPP
#include <string>

using namespace std;

class STO: public Instruction
{
	private:
		string regist;
		string address;
		int value;
	public:
		STO();
		STO(string name, short int code,short int length,  string theAddress);
		STO(string name, int theValue, string theRegister);
		int getValue();
		void display();
};

#endif

