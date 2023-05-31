#ifndef USER_H
#define USER_H

// #include "Schedule.h"
#include <string>
#include <iostream>

class User {
    private:
        std::string username;
        std::string password;
    public:
        User() : username(""), password("") {}
        User(std::string username, std::string password) : username(username), password(password) {}
        std::string getUsername() { return username; }
        std::string getPassword() { return password; }
        friend std::ostream& operator<<(std::ostream& os, const User& user) {
            os << "Username: " << user.username << std::endl;
            os << "Password: " << user.password << std::endl;
            return os;
        }
};

#endif