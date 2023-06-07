#include "../include/Trip.h"
#include <string>
#include <vector>
#include <iostream>

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

        item = nullptr;
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

void Trip::printTripItemsList() {
    unsigned i = 1;

    for (TripItem* item : *tripItems) {
        std::cout << i << ". " << item->getName() << "(";
        if (item->getItemType() == ACTIVITY) {
            std::cout << "ACTIVITY)" << std::endl;
        } else if (item->getItemType() == HOTEL) {
            std::cout << "HOTEL)" << std::endl;
        } else if (item->getItemType() == FLIGHT) {
            std::cout << "FLIGHT)" << std::endl;
        }
        ++i;
    }
}