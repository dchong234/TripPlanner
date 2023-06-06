#include <iostream>
#include <stdexcept>
#include <limits>
#include <string>
#include <vector>

#include "../include/MainMenu.h"
#include "../include/AccountHandler.h"
#include "../include/Trip.h"
#include "../include/TripHandler.h"
#include "../include/Schedule.h"
#include "../include/DummyData.h"
#include "../include/TripItem.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

DummyData dummyData;

int main() {
    Trip* trip = new Trip("test");
    TripHandler tripHandler(trip);

    tripHandler.addTripItem(dummyData.activities.at(0));
    tripHandler.addTripItem(dummyData.flights.at(1));
    tripHandler.addTripItem(dummyData.hotels.at(0));

    Schedule schedule(trip);

    schedule.getSchedule();

    return 0;
}