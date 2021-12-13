#ifndef CPU_HPP
#define CPU_HPP
#include <string>
#include <iostream>
#include "Instruction.hpp"
#include "Program.hpp"
#include "CU.hpp"

using namespace std;

class CPU{
    public:
        CPU();
        CPU(Program program);
        void executeMachineCycle(Program program);
};

#endif