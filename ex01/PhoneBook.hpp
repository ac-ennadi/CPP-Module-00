# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook 
{
    private:
        Contact contacts[8];
        int count;
        int next;
    public:
        PhoneBook ();
        void add (const Contact &contact);
        void drawList() const;
        void showContact(int index) const;
};

#endif