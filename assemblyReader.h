#ifndef ASSEMBLY_READER
#define ASSEMBLY_READER

#include <map>
#include <string>

class AssemblyReader {
private:
    typedef void(AssemblyReader::*functionPtr)(uint32_t, uint32_t);
    std::map<char*, functionPtr> *commandMap;

public:
    AssemblyReader();
    void runCommand(std::string oper, uint32_t op1, uint32_t op2);
    void add(uint32_t op1, uint32_t op2);
};
#include "assemblyReader.cpp"
#endif