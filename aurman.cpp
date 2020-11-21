#include <iostream>
#include <string>
#include <cstring>

void options()
{
        std::cout << "Not a valid option. Useage:" << "\n";
        std::cout << "aurman <install|remove|update|add|update-all> [package]" << "\n\n";
        std::cout << "install -- installs the named package" << "\n";
        std::cout << "remove -- removes the named package" << "\n";
        std::cout << "update -- updates the named package" << "\n";
        std::cout << "add -- adds the named package to the database" << "\n";
        std::cout << "update-all -- updates all the packages in the database" << "\n";
}

int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        options();
    }
    else if (strcmp(argv[1], "install") == 0 && argc >= 3)
    {
        std::cout << argv << "\n";
    }
    else if (strcmp(argv[1], "remove") == 0 && argc >= 3)
    {
        std::cout << argv << "\n";
    }
    else if (strcmp(argv[1], "update") == 0 && argc >= 3)
    {
        std::cout << argv << "\n";
    }
    else if (strcmp(argv[1], "add") == 0 && argc >= 3)
    {
        std::cout << argv << "\n";
    }
    else if (strcmp(argv[1], "update-all") == 0)
    {
        std::cout << argv << "\n";
    }
    else
    {
        options();
        return -1;
    }
    std::cout << " ";
    return 0;
}
