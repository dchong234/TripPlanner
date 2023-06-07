#ifndef USER_H
#define USER_H

#include <string>
#include <fstream>
#include <iostream>
#include <vector>

#include "Schedule.h"
#include "Trip.h"

class User {
    private:
        std::string username;
        std::string password;
        std::vector<Trip*> tripStorage;
    public:
        User() : username(""), password("") {}
        User(std::string username, std::string password) : username(username), password(password) {}
        ~User();
        std::string getUsername() { return username; }
        std::string getPassword() { return password; }
        friend std::ostream& operator<<(std::ostream& os, const User& user) {
            os << "Username: " << user.username << std::endl;
            os << "Password: " << user.password << std::endl;
            return os;
        }

        void importTrips();
        void exportTrips();

        std::string readString(std::ifstream&);
        std::vector<Trip*> getTripStorage();
        void addTripToStorage(Trip*);

        Activity * parseActivity(std::ifstream&);
        Flight * parseFlight(std::ifstream&);
        Hotel * parseHotel(std::ifstream&);
};

#endif