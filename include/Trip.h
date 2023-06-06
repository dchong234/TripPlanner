#ifndef TRIP_H
#define TRIP_H

#include <string>
#include <vector>

#include "../include/Flight.h"
#include "../include/Hotel.h"
#include "../include/Activity.h"
#include "../include/TripItem.h"

class Trip {
    private:
        std::string name;
        std::vector<TripItem*> * tripItems;
    public: 
        Trip();
        Trip(std::string);
        ~Trip();
        std::string getTripName();
        std::vector<TripItem*> * getTripItems();
        void printTripItemsList();
};

#endif