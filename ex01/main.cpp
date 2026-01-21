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

void   Add(PhoneBook &pb){
    Contact contact;
    std::string fn = getInput("First Name: ");
    if (fn.empty()) return;

    std::string ln = getInput("Last Name: ");
    if (ln.empty()) return;

    std::string nn = getInput("Nickname: ");
    if (nn.empty()) return;

    std::string pn = getInput("Phone Number: ");
    if (pn.empty()) return;

    std::string ds = getInput("Darkest Secret: ");
    if (ds.empty()) return;

    contact.set(fn, ln, nn, pn, ds);
    pb.add(contact);
}

static bool isNumber(const std::string &s)
{
    if (s.empty())
        return false;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (!std::isdigit(s[i]))
            return false;
    }
    return true;
}

int main()
{
    PhoneBook pb;
    std::string cmd;

    while (true)
    {
        if (!std::cin.good())
            break;
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, cmd))
            break;
        if (cmd == "ADD")
            Add(pb);
        else if (cmd == "SEARCH")
        {
            pb.drawList();

            std::cout << "Index: ";
            if (!std::getline(std::cin, cmd))
                break;

            if (!isNumber(cmd))
            {
                std::cout << "Invalid index" << std::endl;
                continue;
            }

            int index = std::atoi(cmd.c_str());
            pb.showContact(index);
        }
        else if (cmd == "EXIT")
            break;
    }
    return 0;
}

