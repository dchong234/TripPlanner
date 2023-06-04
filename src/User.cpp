#include "../include/User.h"
#include "../include/TripHandler.h"

#include <string>
#include <fstream>
#include <iostream>

User::~User() {
    for (Trip* trip : tripStorage) {
        delete trip;
    }
}

void User::importTrips() {
    std::string filename = "data/" + this->getUsername() + "Trips.dat";

    std::string str;

    std::ifstream inFS(filename);

    TripHandler tripHandler;

    Trip* trip = nullptr;

    int i = 0;

    if (!inFS.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        exit(1);
    }  

    while (true) {
        str = readString(inFS);
        std::cout << "IDX: " << i << std::endl;
        // std::cout << str << std::endl;

        if (str == "trip") {
            std::cout << "creating trip" << std::endl;
            str = readString(inFS);
            std::cout << "Trip Name: " << str << std::endl;
            trip = new Trip(str);
            tripHandler.setTrip(trip);

            // TODO: push trip to user storage
            tripStorage.push_back(trip);
        }

        if (str == "\nactivity") {
            std::cout << "parsing activity" << std::endl;
            tripHandler.addActivity(parseActivity(inFS));
            // std::cout << trip->getActivities()->at(0)->getActivity();
        }

        if (str == "\nflight") {
            std::cout << "parsing flight" << std::endl;
            tripHandler.addFlight(parseFlight(inFS));
        }

        if (str == "\nhotel") {
            std::cout << "parsing hotel" << std::endl;
            tripHandler.addHotel(parseHotel(inFS));
        }

        if (inFS.eof() == true) {
            break;
        }

        ++i;
    }
}

std::string User::readString(std::ifstream& file) {
    std::string line;
    getline(file, line, '/');
    return line;
}

Activity* User::parseActivity(std::ifstream& file) {
    return new Activity(readString(file), std::stod(readString(file)), std::stod(readString(file)));
}

Flight* User::parseFlight(std::ifstream& file) {
    return new Flight(readString(file), std::stoi(readString(file)), std::stoi(readString(file)), 
                      readString(file), readString(file), std::stod(readString(file)));
}

Hotel* User::parseHotel(std::ifstream& file) {
    return new Hotel(readString(file), readString(file), std::stod(readString(file)), std::stoi(readString(file)), std::stod(readString(file)));
}
