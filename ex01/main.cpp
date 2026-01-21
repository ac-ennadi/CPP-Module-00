#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

static std::string getInput(const std::string &prompt)
{
    std::string input;

    std::cout << prompt;
    if (!std::getline(std::cin, input))
        return "";
    return input;
}

int main()
{
    PhoneBook pb;
    std::string cmd;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, cmd))
            break;

        if (cmd == "ADD")
        {
            Contact contact;

            std::string fn = getInput("First Name: ");
            if (fn.empty()) break;

            std::string ln = getInput("Last Name: ");
            if (ln.empty()) break;

            std::string nn = getInput("Nickname: ");
            if (nn.empty()) break;

            std::string pn = getInput("Phone Number: ");
            if (pn.empty()) break;

            std::string ds = getInput("Darkest Secret: ");
            if (ds.empty()) break;

            contact.set(fn, ln, nn, pn, ds);
            pb.add(contact);
        }
        else if (cmd == "SEARCH")
        {
            pb.drawList();

            std::cout << "Index: ";
            if (!std::getline(std::cin, cmd))
                break;

            pb.showContact(std::atoi(cmd.c_str()));
        }
        else if (cmd == "EXIT")
            break;
    }
    return 0;
}
