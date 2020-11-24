#include "aurman.hpp"
#include <chrono>
#include <iomanip>
#include <ctime>

Aurman::Aurman(const char* dict, const char* logFilePath, bool toLog, const char* command, const char* command2)
{
    // set all varibles
    version = 0.2;
    aurDict = dict;
    mkpkgCommand = command;
    gitCommand = command2;
    logging = toLog;
    if (logging == true)
    {
        std::ofstream logFile(logFilePath);
        // open logfile if logging is enabled
    }
    
    // logging
    log("aurman version " + std::to_string(version));
    log("the AUR install directory is:" + aurDict);
    log("the git command is:" + gitCommand);
    log("the install command is:" + mkpkgCommand);

}    
Aurman::~Aurman()
{
    log("object gone now"); // log object deletion
    logFile.close();
}

void Aurman::log(std::string msg)
{
    if (logging == true)
    {
        std::time_t t = std::time(nullptr);
        std::tm tm = *std::localtime(&t);
        logFile << "[" << std::put_time(&tm, "%d/%m/%Y %H:%M:%S") << "]" << msg << "\n";
    }   
}

int Aurman::update(const char* charPackage)
{
    std::string package = charPackage;
    std::string command = "cd " + aurDict + package + " && " + gitCommand + " pull";
    // constructs a command to pull the package
    std::system(command.c_str()); // executes the command
    std::system(("cd " + aurDict + package + " && " + mkpkgCommand).c_str()); // updates the package
    log("updated the package: " + package);
    return 0;
}
int Aurman::remove(const char* package)
{
    // TODO, create remove function
    return 0;
}
int Aurman::install(const char* charPackage)
{
    std::string package = charPackage;
    std::string command = gitCommand + " clone https://aur.archlinux.org/" + package + ".git " + aurDict + package; 
    // constructs a command to clone the package
    std::system(command.c_str()); // executes the command
    std::system(("cd " + aurDict + package + " && " + mkpkgCommand).c_str()); // installes the package
    log("instaled the package: " + package);
    return 0;
}