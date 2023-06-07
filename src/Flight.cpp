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

Flight::Flight(const Flight& other) : TripItem(other.id, FLIGHT, other.startTime, other.endTime, other.airline) {
    this->airline = other.airline;
    this->origin = other.origin;
    this->destination = other.destination;
    this->price = other.price;
}

Flight& Flight::operator=(const Flight& other) {
    if (this == &other) {
        return *this;
    }

    this->id = other.id;
    this->name = other.name;
    this->airline = other.airline;
    this->startTime = other.startTime;
    this->endTime = other.endTime;
    this->origin = other.origin;
    this->destination = other.destination;
    this->price = other.price;

    return *this;
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

void Flight::extractItem(std::ofstream& outFS)
{
    outFS << "flight/";
    outFS << id << "/" << airline << "/" << startTime << "/" << endTime << "/"
          << origin << "/" << destination << "/" << price << "/" << std::endl;
}