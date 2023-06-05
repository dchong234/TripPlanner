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

        // std::vector<Flight*> * flights;
        // std::vector<Hotel*> * hotels;
        // std::vector<Activity*> * activities;
    public: 
        Trip();
        Trip(std::string);
        ~Trip();
        std::string getTripName();
        std::vector<TripItem*> * getTripItems();
        // std::vector<Flight*> * getFlights();
        // std::vector<Hotel*> * getHotels();
        // std::vector<Activity*> * getActivities();
        friend std::ostream& operator<<(std::ostream& os, const Trip& trip) {
            os << "Trip Name operator: " << trip.name << std::endl;
            return os;
        }

};
#endif