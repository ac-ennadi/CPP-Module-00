#include "Contact.hpp"

Contact::Contact() {}

void Contact::set(
    const std::string &fn,
    const std::string &ln,
    const std::string &nn,
    const std::string &pn,
    const std::string &ds
)
{
    firstName = fn;
    lastName = ln;
    nickname = nn;
    phoneNumber = pn;
    darkestSecret = ds;
}

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getPhoneNumber() const { return phoneNumber; }
std::string Contact::getDarkestSecret() const { return darkestSecret; }

bool Contact::isEmpty() const
{
    return firstName.empty();
}
