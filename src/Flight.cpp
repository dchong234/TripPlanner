#include "../include/Flight.h"
#include <string>
#include <iostream>
#include <fstream>

Flight::Flight(std::string airline, int departureTime, int arrivalTime,
std::string origin, std::string destination, double price) {
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

int Flight::getDepartureTime() {
    return this->departureTime;
}

int Flight::getArrivalTime() {
    return this->arrivalTime;
}

std::string Flight::getOrigin() {
    return this->origin;
}

std::string Flight::getDestination() {
    return this->destination;
}

double Flight::getPrice() {
    return this->price;
}

std::string Flight::getFlight() {
    std::string flightInformation = "Airline: " + this->airline + "\n"
    + "Departure Time: " + std::to_string(this->departureTime) + "\n" 
    + "Arrival Time: " + std::to_string(this->arrivalTime) + "\n" 
    + "Origin: " + this->origin + "\n"
    + "Destination: " + this->destination + "\n"
    + "Price: $" + std::to_string(this->price) + "\n";

    return flightInformation;
}

void Flight::extractFlight(std::ofstream& outFS)
{
    outFS << "flight/";
    outFS << airline << "/" << departureTime << "/" << arrivalTime << "/"
          << origin << "/" << destination << "/" << price << "/" << std::endl;
}