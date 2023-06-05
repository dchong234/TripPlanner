#include "../include/TripHandler.h"
#include "../include/User.h"

#include <vector>
#include <fstream>

TripHandler::TripHandler() : trip(nullptr) {}

TripHandler::TripHandler(Trip* trip) : trip(trip) {}

TripHandler::~TripHandler() {}

void TripHandler::addActivity(Activity* activity) {
    trip->getActivities()->push_back(activity);
}

void TripHandler::removeActivity(Activity* activity) {
    std::vector<Activity*>::iterator it = getActivityPosition(activity);

    trip->getActivities()->erase(it);
}

void TripHandler::addHotel(Hotel* hotel) {
    //std::vector<Hotel*> * hotelVector = trip->getHotels();
    trip->getHotels()->push_back(hotel);
}

void TripHandler::removeHotel(Hotel* hotel) {
    std::vector<Hotel*>::iterator it = getHotelPosition(hotel);

    trip->getHotels()->erase(it);
}

void TripHandler::addFlight(Flight* flight) {
    //std::vector<Flight*> * flightVector = trip->getFlights();
    trip->getFlights()->push_back(flight);
}

void TripHandler::removeFlight(Flight* flight) {
    std::vector<Flight*>::iterator it = getFlightPosition(flight);

    trip->getFlights()->erase(it);
}

void TripHandler::setTrip(Trip* trip) {
    this->trip = trip;
}

std::vector<Activity*>::iterator TripHandler::getActivityPosition(Activity* activity) {
    //std::vector<Activity*> * activitiesVector = trip->getActivities();

    for (auto it = trip->getActivities()->begin(); it != trip->getActivities()->end(); ++it) {
        if ((*it)->getName() == activity->getName()) {
            return it;
        }
    }

    return trip->getActivities()->end();
}

std::vector<Hotel*>::iterator TripHandler::getHotelPosition(Hotel* hotel) {
    //std::vector<Hotel*> * hotelVector = trip->getHotels();

    for (auto it = trip->getHotels()->begin(); it != trip->getHotels()->end(); ++it) {
        if ((*it)->getName() == hotel->getName()) {
            return it;
        }
    }

    return trip->getHotels()->end();
}

std::vector<Flight*>::iterator TripHandler::getFlightPosition(Flight* flight) {
    //std::vector<Flight*> * flightsVector = trip->getFlights();

    for (auto it = trip->getFlights()->begin(); it != trip->getFlights()->end(); ++it) {
        if ((*it)->getAirline() == flight->getAirline()) {
            return it;
        }
    }

    return trip->getFlights()->end();
}

void TripHandler::extractTrip(User& user) {
    std::string filename = "data/" + user.getUsername() + "Trips.dat";

    std::ofstream outFS(filename, std::fstream::out);

    if (outFS.is_open()) {
        outFS << "trip/" << trip->getTripName() << std::endl;
        
        for (auto x : *(trip->getActivities())) {
            x->extractActivity(outFS);
        }

        for (auto x : *(trip->getFlights())) {
            x->extractFlight(outFS);
        }

        for (auto x : *(trip->getHotels())) {
            x->extractHotel(outFS);
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
    return new Activity(readString(file), std::stod(readString(file)), std::stod(readString(file)));
}

Flight* TripHandler::parseFlight(std::ifstream& file) {
    return new Flight(readString(file), std::stoi(readString(file)), std::stoi(readString(file)), 
                      readString(file), readString(file), std::stod(readString(file)));
}

Hotel* TripHandler::parseHotel(std::ifstream& file) {
    return new Hotel(readString(file), readString(file), std::stod(readString(file)), std::stoi(readString(file)), std::stod(readString(file)));
}