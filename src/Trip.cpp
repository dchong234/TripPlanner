#include "Trip.h"
#include <string>
#include <vector>

Trip::Trip(string name){
    this->name = name;
}

string Trip::getTripName(){
    return this->name;
}

vector<Flight> Trip::getFlights() {
    return this->flights;
};

vector<Hotel> Trip::getHotels() {
    return this->hotels;
};

vector<Activity> Trip::getActivities() {
    return this->activities;
};