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
    for (Flight* flight : *flights) {
        delete flight;
    }
    delete flights;
    flights = nullptr;

    for (Hotel* hotel : *hotels) {
        delete hotel;
    }
    delete hotels;
    hotels = nullptr;

    for (Activity* activity : *activities) {
        delete activity;
    }
    delete activities;
    activities = nullptr;
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