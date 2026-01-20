#include "Contact.hpp"

Contact::Contact() {};

void Contact::set (
    const std::string &fn,
    const std::string &ln,
    const std::string &nm,
    const std::string &pn,
    const std::string &ds
) {
    FirstName = fn;
    LastName = ln;
    NickName = nm;
    PhoneNumber = pn;
    DarkSecret = ds;
};

std::string Contact::GetFirstName () const {return (FirstName);}
std::string Contact::GetLastName () const {return (LastName);}
std::string Contact::GetNickName () const {return (NickName);}
std::string Contact::GetPhoneNumber () const {return (PhoneNumber);}
std::string Contact::GetDarkSecret () const {return (DarkSecret);}

