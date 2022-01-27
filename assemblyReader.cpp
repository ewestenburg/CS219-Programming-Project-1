#include "assemblyReader.h"

#include <iostream>

AssemblyReader::AssemblyReader(){
    /*commandMap = new std::map<char*, AssemblyReader::functionPtr>;
    commandMap->emplace((char*)"ADD", &AssemblyReader::add);*/
}

void AssemblyReader::runCommand(std::string oper, uint32_t op1, uint32_t op2){
    /*auto command = ;
    (this->*(commandMap->find(oper))->second)();*/
    if(oper == "ADD"){
        add(op1, op2);
    }
}

void AssemblyReader::add(uint32_t op1, uint32_t op2){
    std::cout << std::hex << op1 << " + " << std::hex << op2 << " = " << op1 + op2 << "\n";
}