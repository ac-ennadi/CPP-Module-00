#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    next = 0;
    count = 0;
};

void PhoneBook::add(const Contact &Contact)
{
    contacts[next] = Contact;
    next = (next + 1) % 8;
    if (count < 8)
        count++;
}

static std::string formatField(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return std::string(10 - str.length(), ' ') + str;
}

void PhoneBook::drawList() const
{
int i = 0;

    // header
    std::cout << std::setw(10) << "Index" << " | "
              << std::setw(10) << "First Name" << " | "
              << std::setw(10) << "Last Name" << " | "
              << std::setw(10) << "Nickname" << std::endl;

    // rows
    while (i < count)
    {
        std::cout << std::setw(10) << i << " | "
                  << formatField(contacts[i].GetFirstName()) << " | "
                  << formatField(contacts[i].GetLastName()) << " | "
                  << formatField(contacts[i].GetNickName()) << std::endl;
        i++;
    }
}

void PhoneBook::showContact(int index) const
{
    if (index < 0 || index >= count)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }

    std::cout << "First Name: " << contacts[index].GetFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].GetLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].GetNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index].GetPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].GetDarkSecret() << std::endl;
}