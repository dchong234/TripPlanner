#include "../include/TripHandler.h"
#include "../include/User.h"

#include <vector>
#include <fstream>

TripHandler::TripHandler() : trip(nullptr) {}

TripHandler::TripHandler(Trip* trip) : trip(trip) {}

TripHandler::~TripHandler() {}

void TripHandler::setTrip(Trip* trip) {
    this->trip = trip;
}

std::vector<TripItem*>::iterator TripHandler::getItemPosition(TripItem* item) {
    for (auto it = trip->getTripItems()->begin(); it != trip->getTripItems()->end(); ++it) {
        if ((*it)->getID() == item->getID()) {
            return it;
        }
    }

    return trip->getTripItems()->end();
}

void TripHandler::addTripItem(TripItem* item) {
    trip->getTripItems()->push_back(item);
}

void TripHandler::removeTripItem(TripItem* item) {
    std::vector<TripItem*>::iterator it = getItemPosition(item);

    trip->getTripItems()->erase(it);
}

void TripHandler::extractTrip(User& user) {
    std::string filename = "data/" + user.getUsername() + "Trips.dat";

    std::ofstream outFS(filename, std::fstream::out);

    if (outFS.is_open()) {
        outFS << "trip/" << trip->getTripName() << std::endl;

        for (TripItem* item : *(trip->getTripItems())) {
            if (item->getItemType() == ACTIVITY) {
                static_cast<Activity*>(item)->extractActivity(outFS);
            }
            if (item->getItemType() == HOTEL) {
                static_cast<Hotel*>(item)->extractHotel(outFS);
            }
            if (item->getItemType() == FLIGHT) {
                static_cast<Flight*>(item)->extractFlight(outFS);
            }
        }
    } else {
        std::cerr << "Failed to open the file." << std::endl;
    }
    outFS.close();
}

std::string TripHandler::readString(std::ifstream& file) {
    std::string line;
    getline(file, line, '/');
    return line;
}

Activity* TripHandler::parseActivity(std::ifstream& file) {
    return new Activity(readString(file), readString(file), std::stod(readString(file)), std::stod(readString(file)));
}

Flight* TripHandler::parseFlight(std::ifstream& file) {
    return new Flight(readString(file), readString(file), std::stoi(readString(file)), std::stoi(readString(file)), 
                      readString(file), readString(file), std::stod(readString(file)));
}

Hotel* TripHandler::parseHotel(std::ifstream& file) {
    return new Hotel(readString(file), readString(file), readString(file), std::stod(readString(file)), std::stoi(readString(file)), std::stod(readString(file)));
}