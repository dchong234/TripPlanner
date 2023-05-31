#include "../include/AccountHandler.h"
#include "../include/User.h"

#include <fstream>
#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>

void AccountHandler::login() {
    bool flag = false;

    std::cout << "Enter a username: ";
    std::cin >> username;
    
    std::cout << "Enter a password: ";
    std::cin >> password;

    for (auto x : userStorage) {
        if (x.getUsername() == username) {
            flag = true;
            break;
        }
    }

    if (!flag) {
        throw std::runtime_error("Username not found");
    }

    flag = false;

    for (auto x : userStorage) {
        if (x.getPassword() == password) {
            flag = true;
            break;
        }
    }

    if (!flag) {
        throw std::runtime_error("Password not found");
    }
}

AccountHandler::AccountHandler(){
    std::ifstream inFS;

    inFS.open("data/AccountStorage", std::ios::in);
    if (inFS.is_open()) {
        while(inFS >> username) {
            if (inFS >> password) {
                userStorage.push_back(User(this->username, this->password));
            }
        }
    }
    else {
        std::cerr << "Failed to open the file." << std::endl;
    }

    inFS.close();
}

void AccountHandler::createAccount() {
    std::ofstream outFS;
    outFS.open("data/AccountStorage", std::fstream::app);

    if (outFS.is_open()) {
        std::string username, password;

        std::cout << "Enter username: ";
        std::cin >> username;
        std::cout << "Enter password: ";
        std::cin >> password;

        // Write the username and password to the file
        outFS << username << " " << password << std::endl;

        outFS.close();
    } else {
        std::cerr << "Failed to open the file." << std::endl;
    }
}

void AccountHandler::printAccounts() {
    for (auto x : userStorage) {
        std::cout << x << std::endl;
    }
}