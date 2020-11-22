#include <string>

class Aurman
{
private:
    std::string aurDict;
    std::string mkpkgCommand;
    std::string gitCommand;
    std::string logFileLoc;
    float version;
    bool logging;
    void log(std::string msg);
public:
    Aurman(std::string dict, std::string logFile, std::string command, std::string command2, bool toLog);
    ~Aurman();
    int update(std::string package);
    int remove(std::string package);
    int install(std::string package);
};

