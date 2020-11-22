#include "aurman.hpp"

Aurman::Aurman(const char* dict, const char* logFile, bool toLog, const char* command, const char* command2)
{
    // set all varibles
    version = 0.1;
    aurDict = dict;
    mkpkgCommand = command;
    gitCommand = command2;
    logging = toLog;

    // logging
}    
Aurman::~Aurman()
{
    log("object gone now"); // log object deletion
}

void Aurman::log(std::string msg)
{
    if (logging)
    {
      // TODO   
    }   
}

int Aurman::update(const char* package)
{
    // TODO, create update function
    return 0;
}
int Aurman::remove(const char* package)
{
    // TODO, create remove function
    return 0;
}
int Aurman::install(const char* package)
{
    // constructs a command to clone the package
    std::string command = gitCommand + " clone https://aur.archlinux.org/" + package + ".git " + aurDict + package; 
    std::system(command.c_str()); // executes the command
    std::system(("cd " + aurDict + package + " && " + mkpkgCommand).c_str()); // installes the package
}