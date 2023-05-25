#include "../include/AccountHandler.h"
#include <fstream>
#include <iostream>
#include <string>
#include <stdexcept>

void AccountHandler::login() {
    bool flagFound = false;
    std::cout << "Enter a username: ";
    std::cin >> username;
    for (unsigned i = 0; i < usernameStorage.size(); ++i) {
        if (usernameStorage.at(i) == username) {
            flagFound = true;
            break;
        }
    }
    if (flagFound == false) {
        throw std::runtime_error("Username not found");
    }

    flagFound = false;
    std::cout << std::endl << "Enter a password: ";
    std::cin >> password;
    for (unsigned i = 0; i < passwordStorage.size(); ++i) {
        if (passwordStorage.at(i) == password) {
            flagFound = true;
            break;
        }
    }
    if (flagFound == false) {
        throw std::runtime_error("Password incorrect");
    }
}

// void AccountHander::logout() {

// }

AccountHandler::AccountHandler(){
    std::ifstream inFS;
    inFS.open("data/AccountStorage", std::ios::in);
    if (inFS.is_open()) {
        while(inFS >> username) {
            usernameStorage.push_back(username);
            if (inFS >> password) {
                passwordStorage.push_back(password);
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
    for (auto name : usernameStorage) {
        std::cout << name << std::endl;
    }

    for (auto pw : passwordStorage) {
        std::cout << pw << std::endl;
    }
}