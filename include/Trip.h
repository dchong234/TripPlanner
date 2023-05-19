#ifndef TRIP_H
#define TRIP_H

#include <string>
#include <vector>
#include "Flight.h"
#include "Hotel.h"
#include "Activity.h"


class Trip {
    private:
        string name;
        vector<Flight> flights;
        vector<Hotel> hotels;
        vector<Activity> activities;
    public: 
        Trip(string);
        string getTripName();

};

#endif