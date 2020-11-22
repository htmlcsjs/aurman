#include "aurman.hpp"

Aurman::Aurman(std::string dict, std::string logFile, std::string command = "makepkg -si", std::string command2 = "git",
               bool toLog = false)
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
    log("object gone now");
}

void Aurman::log(std::string msg)
{
    if (logging)
    {
      // TODO   
    }   
}

int update(std::string package)
{
    // TODO, create update function
}
int remove(std::string package)
{
    // TODO, create remove function
}
int install(std::string package)
{
    // TODO, create install function
}