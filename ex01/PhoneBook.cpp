#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    next = 1;
    count = 0;
};

void PhoneBook::add(const Contact &Contact)
{
    while (count < 8)
    {

        next++;
        count++;
    }
}