#ifndef DUMMYDATA_H
#define DUMMYDATA_H

#include <string>
#include <vector>
#include "../include/Flight.h"
#include "../include/Hotel.h"
#include "../include/Activity.h"

struct DummyData {
    std::vector<TripItem*> flights;
    std::vector<TripItem*> hotels;
    std::vector<TripItem*> activities;

    DummyData();
    ~DummyData();
};

#endif