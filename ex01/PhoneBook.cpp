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
