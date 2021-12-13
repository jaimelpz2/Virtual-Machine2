/*
 * =====================================================================================
 *
 *       Filename:  Main.cpp
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
#include <stdlib.h>
#include <iostream>

#include "Instruction.hpp"
#include "InstructionSet.hpp"
#include "Program.hpp"
#include "MOV.hpp"
#include "CU.hpp"
#include "ADD.hpp"
#include "Subtract.hpp"
#include "Div.hpp"
#include "Mult.hpp"
#include "CPU.hpp"

using namespace std;
int main(void)
{/*
        // Instruction
	Instruction i1;
	Instruction i2("MOV", 50, 3);
	Instruction i3("MOV",60,3);


	// Instruction Set
	InstructionSet instructionSet; // se llama clase por asi decir
	instructionSet.addInstruction(i2);
	i1 = instructionSet.getInstruction(0);
	
	i1.display(); // esto muestra la 2 display es un metodo de mostrar

    */

	Instruction start("START", 50, 1);
	Instruction mover("MOV",60,3);
	Instruction mover2("MOV",60,3);
	Instruction store("STORE",61,3);
	Instruction stop("STOP", 51, 1);
	ADD add("ADD", 80, 3, 60, 12);
	Subtract sub("SUB", 81, 3, 20, 10);
	Div div("DIV", 82, 3, 30, 10);
	Mult mul("MUL", 83, 3, 3, 6);
	
	
	Program program;  // se llama clase 

	program.addInstruction(start,0);
	program.addInstruction(mover,1);
	program.addInstruction(mover2,2);
	program.addInstruction(add,3);
	program.addInstruction(store,4);
	program.addInstruction(sub,5);
	program.addInstruction(div,6);
	program.addInstruction(mul,7);
	program.addInstruction(stop,8);

	CPU cpu;
    cpu.executeMachineCycle(program);
	
/*
	cout << program.getInstruction(0).getName() << endl;
	cout << program.getInstruction(1).getName() << endl;
	cout << program.getInstruction(2).getName() << endl;
	cout << program.getInstruction(3).getName() << endl;
	cout << program.getInstruction(4).getName() << endl;
	cout << program.getInstruction(5).getName() << endl;
	cout << program.getInstruction(6).getName() << endl;
	cout << program.getInstruction(7).getName() << endl;


      
	Instruction* instructions[8];

	instructions[0]=&start;
	instructions[1]=&add;
	instructions[2]=&sub;
	instructions[3]=&div;
	instructions[4]=&mul;
	
	cout << program.getInstruction(3).getName() << endl;
		
	ADD* ptr_add = static_cast<ADD*>(instructions[1]);
       	cout << ptr_add->getOperand1() << endl;	
        cout << ptr_add->getOperand2() << endl;	

		cout << "" << endl;

		cout << program.getInstruction(5).getName() << endl;
	
	Subtract* ptr_sub = static_cast<Subtract*>(instructions[2]);
       	cout << ptr_sub->getOperand1() << endl;	
        cout << ptr_sub->getOperand2() << endl;

		cout << "" << endl;

		cout << program.getInstruction(6).getName() << endl;

		Div* ptr_div = static_cast<Div*>(instructions[3]);
       	cout << ptr_div->getOperand1() << endl;	
        cout << ptr_div->getOperand2() << endl;	

		cout << "" << endl;

		cout << program.getInstruction(7).getName() << endl;

		Mult* ptr_mult = static_cast<Mult*>(instructions[4]);
       	cout << ptr_mult->getOperand1() << endl;	
        cout << ptr_mult->getOperand2() << endl;	

        register int sum,rest,multi,divi,arg1,arg2;
		arg1=ptr_div->getOperand1();
		arg2=ptr_div->getOperand2();

		cout << "" << endl;
	
	__asm__( "addl %%ebx, %%eax;"
		 : "=a" (sum)
		 : "a" (ptr_add->getOperand1()), "b" (ptr_add->getOperand2())
        );

	printf("sum = %i\n", sum);


//RESTA

	__asm__( "subl %%ebx, %%eax;"
		 : "=a" (rest)
		 : "a" (ptr_sub->getOperand1()), "b" (ptr_sub->getOperand2())
        );

	printf("resta = %i\n", rest);

	//DIVISION

	__asm__( " divl %%ebx, %%eax"
		 : "=a" (divi)
		 : "a" (arg1), "b" (arg2)
        );

	printf("division = %i\n", divi);

	//MULTIPLICACION

	__asm__( "imull %%ebx, %%eax;"
		 : "=a" (multi)
		 : "a" (ptr_mult->getOperand1()), "b" (ptr_mult->getOperand2())
        );

	printf("multiplicacion = %i\n", multi);

		cout << program.getInstruction(8).getName() << endl;

	//SUB*
	*/

/*
        // Moving to resgisters and then, adding
	
	MOV mov1("MOVE", 17, "eax");
        MOV mov2("MOVE", 21, "ebx");
	
	instructions[2]=&mov1;
	instructions[3]=&mov2;
	
	MOV* m1 = static_cast<MOV*>(instructions[2]);
	MOV* m2 = static_cast<MOV*>(instructions[3]);

        cout << mov1.getValue() << endl;
        cout << mov2.getValue() << endl;

        __asm__( "movl %1, %%eax;"  
	         "movl %2, %%ebx;"  
	         "addl %%ebx, %%eax;" : "=a" (total) : "g" (m1->getValue()), "g" (m2->getValue()) 
	);

	printf("sum = %i\n", total);

         */

       	return EXIT_SUCCESS;
}

