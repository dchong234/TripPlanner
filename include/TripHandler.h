#ifndef TRIPHANDLER_H
#define TRIPHANDLER_H

#include "../include/Trip.h"
#include "../include/TripItem.h"
#include "../include/Activity.h"
#include "../include/Hotel.h"
#include "../include/Flight.h"
#include "../include/User.h"

#include <vector>

class TripHandler {
    private:
        Trip* trip;

        std::vector<TripItem*>::iterator getItemPosition(TripItem*);

        std::string readString(std::ifstream& file);

        Activity* parseActivity(std::ifstream& file);
        Flight* parseFlight(std::ifstream& file);
        Hotel* parseHotel(std::ifstream& file);
    public:
        TripHandler();
        TripHandler(Trip* trip);
        ~TripHandler();
        
        void addTripItem(TripItem* item);
        void removeTripItem(TripItem* item);
        void removeTripItemByIndex(int idx);

        void setTrip(Trip*);

        void importTripItem(TripItem* item);
};

#endif