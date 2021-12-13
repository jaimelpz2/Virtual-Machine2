#include "STO.hpp"
#include <iostream>


STO::STO(){}

STO::STO(string theName, int theValue, string theRegister)
{
	value = theValue;
}


STO::STO(string name, short int code, short int length, string theAddress): Instruction(name, code, length)
{
	
	address = theAddress;
}

int STO::getValue()
{
	return value;
}

void STO::display()
{
	cout << regist << ", " << address << endl;
}

