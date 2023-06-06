#include "../include/Trip.h"
#include <string>
#include <vector>

Trip::Trip() {
    this->name = "";
    this->tripItems = new std::vector<TripItem*>();
}

Trip::Trip(std::string name){
    this->name = name;
    this->tripItems = new std::vector<TripItem*>();
}

Trip::~Trip() {
    for (TripItem* item : *tripItems) {
        if (item != nullptr) {
            delete item;
        }
    }

    delete tripItems;
    tripItems = nullptr;
}

std::string Trip::getTripName(){
    return this->name;
}

std::vector<TripItem*> * Trip::getTripItems() {
    return this->tripItems;
}