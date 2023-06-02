#ifndef TRIP_H
#define TRIP_H

#include <string>
#include <vector>
#include "../include/Flight.h"
#include "../include/Hotel.h"
#include "../include/Activity.h"
#include "../include/User.h"


class Trip {
    private:
        std::string name;
        std::vector<Flight*> * flights;
        std::vector<Hotel*> * hotels;
        std::vector<Activity*> * activities;
    public: 
        Trip() : name("") {}
        Trip(std::string);
        ~Trip();
        std::string getTripName();
        std::vector<Flight*> * getFlights();
        std::vector<Hotel*> * getHotels();
        std::vector<Activity*> * getActivities();

};
#endif