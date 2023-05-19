#ifndef TRIPHANDLER_H
#define TRIPHANDLER_H
#include "Trip.h"
#include "Activity.h"
#include "Hotel.h"

class TripHandler {
    private:
        Trip& trip;
    public:
        TripHandler(Trip& trip);
        void addActivity(Activity& activity);
        void removeActivity(Activity& activity);
        void addHotel(Hotel& hotel);
        void removeHotel(Hotel& hotel);
        void addFlight(Flight& flight);
        void removeFlight(Flight& flight);
}

#endif