#include "CPU.hpp"
#include <iostream>
#include <cstring>

CPU::CPU(){}

CPU::CPU(Program program){
}

void CPU::executeMachineCycle(Program program){
    Instruction theInstruction;
    CU cu;

    for(int pos=0; pos < 10; pos++){
        theInstruction = cu.fetch(program, pos);
      
    }

}