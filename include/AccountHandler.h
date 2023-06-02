#ifndef ACCOUNTHANDLER_H
#define ACCOUNTHANDLER_H

#include "User.h"

#include <string>
#include <vector>

class AccountHandler {
    private:
        std::string username;
        std::string password;

        User user;
        std::vector<User> userStorage;
        
        std::vector<std::string> usernameStorage;
        std::vector<std::string> passwordStorage;
    public:
        AccountHandler();
        User login();
        User logout();
        void createAccount();
        void printAccounts();
};

#endif