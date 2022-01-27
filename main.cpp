//Author: Eric Ashton Westenburg
//Date: 1/19/22
//CS219 Programming Project #1

#include "assemblyReader.h"

#include <fstream>
#include <sstream>
#include <iostream>

int main(int argc, char *argv[]){
    AssemblyReader reader;

    std::fstream file;
    std::string line;
    std::string operate, o1, o2;
    uint32_t operand1 = 0x0;
    uint32_t operand2 = 0x0;

    file.open(argv[1]);

    while(getline(file, line)){
        std::istringstream ss(line);
        ss >> operate >> std::skipws 
           >> o1 >> std::skipws 
           >> o2;
        operand1 = static_cast<uint32_t>(std::stoul(o1, nullptr, 16));
        operand2 = static_cast<uint32_t>(std::stoul(o2, nullptr, 16));
        reader.runCommand(operate, operand1, operand2);
    }
    return 0;
}