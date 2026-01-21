# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkSecret;
    public:
        // defult constracter
        Contact ();
        void set(
            const std::string &_FirstName,
            const std::string &_LastName,
            const std::string &_NickName,
            const std::string &_PhoneNumber,
            const std::string &_DarkSecret
        );
        //getter function
        std::string GetFirstName() const;
        std::string GetLastName() const;
        std::string GetNickName() const;
        std::string GetPhoneNumber() const;
        std::string GetDarkSecret() const;
        bool isEmpty() const;
};

#endif