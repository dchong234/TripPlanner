#include "Flight.h"
#include <string>

Flight::Flight(string airline, string departureTime, string arrivalTime,
string origin, string desination, double price) {
    this->airline = airline;
    this->departureTime = departureTime;
    this->arrivalTime = arrivalTime;
    this->origin = origin;
    this->destination = destination;
    this->price = price;
}

string Flight::getAirline() {
    return this->airline;
}

string Flight::getDepartureTime() {
    return this->departureTime;
}

string Flight::getArrivalTime() {
    return this->arrivalTime;
}

string Flight::getOrigin() {
    return this->origin;
}

string Flight::getDestination() {
    return this->destination;
}

string Flight::getPrice() {
    return this->price;
}

string Flight::getFlight() {
    string flightInformation = "Airline: " + this->airline + "\n"
    + "Departure Time: " + this->departureTime + "\n" 
    + "Arrival Time: " + this->arrivalTime + "\n" 
    + "Origin: " + this->origin + "\n"
    + "Destination: " + this->destination + "\n"
    + "Price: $" + to_string(this->price) + "\n";

    return flightInformation;
}