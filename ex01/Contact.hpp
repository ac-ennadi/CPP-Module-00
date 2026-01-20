#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact();

    void set(
        const std::string &fn,
        const std::string &ln,
        const std::string &nn,
        const std::string &pn,
        const std::string &ds
    );

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    bool isEmpty() const;
};

#endif
