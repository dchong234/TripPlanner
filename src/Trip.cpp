#include "../include/Trip.h"
#include <string>
#include <vector>

Trip::Trip(std::string name){
    this->name = name;
    this->flights = new std::vector<Flight*>();
    this->hotels = new std::vector<Hotel*>();
    this->activities = new std::vector<Activity*>();
}

Trip::~Trip() {
    for (unsigned i = 0; i < this->flights.size(); ++i) {
        delete this->flights.at(i);
    }
    delete this->flights;

    for (unsigned i = 0; i < this->hotels.size(); ++i) {
        delete this->hotels.at(i);
    }
    delete this->hotels;

    for (unsigned i = 0; i < this->activities.size(); ++i) {
        delete this->activities.at(i);
    }
    delete this->activities;
}

std::string Trip::getTripName(){
    return this->name;
}

std::vector<Flight*> * Trip::getFlights() {
    return this->flights;
};

std::vector<Hotel*> * Trip::getHotels() {
    return this->hotels;
};

std::vector<Activity*> * Trip::getActivities() {
    return this->activities;
};