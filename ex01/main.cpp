#include <iostream>

int main()
{
    std::string cmd;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, cmd);

        if (cmd == "ADD")
        {
            
        }
        else if (cmd == "SEARCH")
        {
            
        }
        else if (cmd == "EXIT")
            break;
    }
    return 0;
}
