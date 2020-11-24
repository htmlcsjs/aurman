#include <string>
#include <fstream>


class Aurman
{
private:
    std::string aurDict;
    std::string mkpkgCommand;
    std::string gitCommand;
    std::ofstream logFile;
    float version;
    bool logging;
    void log(std::string msg);
public:
    Aurman(const char* dict, const char* logFilePath, bool toLog, const char* command, const char* command2);
    ~Aurman();
    int update(const char* charPackage);
    int remove(const char* package);
    int install(const char* charPackage);
};

