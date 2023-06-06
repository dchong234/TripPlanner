#include "../include/Flight.h"
#include <string>
#include <iostream>
#include <fstream>

Flight::Flight(std::string id, std::string airline, int departureTime, int arrivalTime,
std::string origin, std::string destination, double price) : TripItem(id, FLIGHT, departureTime, arrivalTime, airline) {
    this->airline = airline;
    this->origin = origin;
    this->destination = destination;
    this->price = price;
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

std::string Flight::getItem() {
    std::string flightInformation = "Airline: " + this->airline + "\n"
    + "Departure Time: " + formatTime(this->startTime) + "\n" 
    + "Arrival Time: " + formatTime(this->endTime) + "\n" 
    + "Origin: " + this->origin + "\n"
    + "Destination: " + this->destination + "\n"
    + "Price: $" + std::to_string(this->price) + "\n";

    return flightInformation;
}

void Flight::extractFlight(std::ofstream& outFS)
{
    outFS << "flight/";
    outFS << id << "/" << airline << "/" << startTime << "/" << endTime << "/"
          << origin << "/" << destination << "/" << price << "/" << std::endl;
}