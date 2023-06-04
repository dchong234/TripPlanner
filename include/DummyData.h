#ifndef DUMMYDATA_H
#define DUMMYDATA_H

#include <string>
#include <vector>
#include "../include/Flight.h"
#include "../include/Hotel.h"
#include "../include/Activity.h"

class DummyData {
    public:
        std::vector<Flight*> flights;
        std::vector<Hotel*> hotels;
        std::vector<Activity*> activities;
        DummyData();
        ~DummyData();
};

#endif