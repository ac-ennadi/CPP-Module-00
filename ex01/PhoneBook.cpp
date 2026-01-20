#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : count(0), next(0) {}

void PhoneBook::add(const Contact &c)
{
    contacts[next] = c;
    next = (next + 1) % 8;
    if (count < 8)
        count++;
}

static std::string format(std::string s)
{
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return std::string(10 - s.length(), ' ') + s;
}

void PhoneBook::showList() const
{
    std::cout << "     Index|First Name| Last Name|  Nickname\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i << "|"
                  << format(contacts[i].getFirstName()) << "|"
                  << format(contacts[i].getLastName()) << "|"
                  << format(contacts[i].getNickname()) << "\n";
    }
}

void PhoneBook::showContact(int index) const
{
    if (index < 0 || index >= count)
    {
        std::cout << "Invalid index\n";
        return;
    }
    std::cout << "First Name: " << contacts[index].getFirstName() << "\n";
    std::cout << "Last Name: " << contacts[index].getLastName() << "\n";
    std::cout << "Nickname: " << contacts[index].getNickname() << "\n";
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << "\n";
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << "\n";
}
