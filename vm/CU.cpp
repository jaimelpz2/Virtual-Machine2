/*
 * =====================================================================================
 *
 *       Filename:  CU.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  J. Aviña
 *   Organization:  
 *
 * =====================================================================================
 */
#include "CU.hpp"
#include "ADD.hpp"
#include "Subtract.hpp"
#include "Div.hpp"
#include "Mult.hpp"


CU::CU()
{
	status = "idle";
}

CU::CU(string theStatus)
{
	status = theStatus;
}

Instruction CU::fetch(Program theProgram, int thePosition)
{
	return theProgram.getInstruction(thePosition);
}

int CU::decode(Instruction* theInstruction)
{

	return theInstruction->getCode();
}

void CU::execute(int theCode)
{
	
		Instruction* instructions[8];
		register int sum,rest,multi,divi,arg1,arg2;
	
	ADD* ptr_add = static_cast<ADD*>(instructions[1]);
	Subtract* ptr_sub = static_cast<Subtract*>(instructions[2]);
	Div* ptr_div = static_cast<Div*>(instructions[3]);
	Mult* ptr_mult = static_cast<Mult*>(instructions[4]);

	switch (theCode) {
		
		case 50:
			cout << "Inicio del programa" << endl;
			break;

		case 60:
			cout << "mover datos" << endl;
			
			break;
	
		case 51:
			cout << "Fin de ejecucion del programa" << endl;
			break;

		case 80:
			cout << "Sumar" << endl;
				
			
				
				
				cout << ptr_add->getOperand1() << endl;	
				cout << ptr_add->getOperand2() << endl;	
		
					__asm__( "addl %%ebx, %%eax;"
			: "=a" (sum)
			: "a" (ptr_add->getOperand1()), "b" (ptr_add->getOperand2())
			);

	printf("sum = %i\n", sum);
			break;
			
		case 81:
			cout << "Resta" << endl;

				
				cout << ptr_sub->getOperand1() << endl;	
				cout << ptr_sub->getOperand2() << endl;
					__asm__( "subl %%ebx, %%eax;"
			: "=a" (rest)
			: "a" (ptr_sub->getOperand1()), "b" (ptr_sub->getOperand2())
			);

	printf("resta = %i\n", rest);
			break;

		case 82:
			cout << "Division" << endl;

				
				cout << ptr_div->getOperand1() << endl;	
				cout << ptr_div->getOperand2() << endl;	

					__asm__( " divl %%ebx, %%eax"
			: "=a" (divi)
			: "a" (arg1), "b" (arg2)
			);

	printf("division = %i\n", divi);

			break;
		case 83:
			cout << "Multiplicacion" << endl;

				
				cout << ptr_mult->getOperand1() << endl;	
				cout << ptr_mult->getOperand2() << endl;

				__asm__( "imull %%ebx, %%eax;"
		 : "=a" (multi)
		 : "a" (ptr_mult->getOperand1()), "b" (ptr_mult->getOperand2())
        );

	printf("multiplicacion = %i\n", multi);
			break;

		default:
			break;
	}
 }

