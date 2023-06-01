#include "../include/Trip.h"
#include <string>
#include <vector>

Trip::Trip(std::string name){
    this->name = name;
    this->flights = new std::vector<Flight*>();
    this->hotels = new std::vector<Hotel*>();
    this->activities = new std::vector<Activity*>();
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