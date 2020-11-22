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
    Aurman(const char* dict, const char* logFile, bool toLog, const char* command, const char* command2);
    ~Aurman();
    int update(const char* package);
    int remove(const char* package);
    int install(const char* package);
};

