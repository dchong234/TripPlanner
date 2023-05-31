#ifndef TRIPHANDLER_H
#define TRIPHANDLER_H
#include "../include/Trip.h"
#include "../include/Activity.h"
#include "../include/Hotel.h"
#include <vector>

class TripHandler {
    private:
        Trip& trip;
        
        // helper functions
        std::vector<Flight>::iterator getFlightPosition();
        std::vector<Hotel>::iterator getHotelPosition();
        std::vector<Activity>::iterator getActivityPosition();
    public:
        TripHandler(Trip& trip);
        void addActivity(Activity& activity);
        void removeActivity(Activity& activity);
        void addHotel(Hotel& hotel);
        void removeHotel(Hotel& hotel);
        void addFlight(Flight& flight);
        void removeFlight(Flight& flight);
};

#endif