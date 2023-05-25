#ifndef ACCOUNTHANDLER_H
#define ACCOUNTHANDLER_H
#include <string>
#include <vector>

class AccountHandler {
    private:
        std::string username;
        std::string password;
        std::vector<std::string> usernameStorage;
        std::vector<std::string> passwordStorage;
    public:
        AccountHandler();
        void login();
        void logout();
        void createAccount();
        void printAccounts();
};

#endif