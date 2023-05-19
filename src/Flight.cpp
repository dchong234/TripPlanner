#include "Flight.h"
#include <string>

Flight::Flight(std::string airline, std::string departureTime, std::string arrivalTime,
std::string origin, std::string desination, double price) {
    this->airline = airline;
    this->departureTime = departureTime;
    this->arrivalTime = arrivalTime;
    this->origin = origin;
    this->destination = destination;
    this->price = price;
}

std::string Flight::getAirline() {
    return this->airline;
}

std::string Flight::getDepartureTime() {
    return this->departureTime;
}

std::string Flight::getArrivalTime() {
    return this->arrivalTime;
}

std::string Flight::getOrigin() {
    return this->origin;
}

string Flight::getDestination() {
    return this->destination;
}

std::string Flight::getPrice() {
    return this->price;
}

std::string Flight::getFlight() {
    std::string flightInformation = "Airline: " + this->airline + "\n"
    + "Departure Time: " + this->departureTime + "\n" 
    + "Arrival Time: " + this->arrivalTime + "\n" 
    + "Origin: " + this->origin + "\n"
    + "Destination: " + this->destination + "\n"
    + "Price: $" + to_string(this->price) + "\n";

    return flightInformation;
}