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
    delete this->flights;
    this->flights = nullptr;
    delete this->hotels;
    this->hotels = nullptr;
    delete this->activities;
    this->activities = nullptr;
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