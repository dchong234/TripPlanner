#ifndef TRIPHANDLER_H
#define TRIPHANDLER_H
#include "../include/Trip.h"
#include "../include/Activity.h"
#include "../include/Hotel.h"
#include "../include/Flight.h"
#include "../include/User.h"
#include <vector>

class TripHandler {
    private:
        Trip* trip;

        // helper functions
        std::vector<Flight*>::iterator getFlightPosition(Flight*);
        std::vector<Hotel*>::iterator getHotelPosition(Hotel*);
        std::vector<Activity*>::iterator getActivityPosition(Activity*);

        std::string readString(std::ifstream& file);
        Activity* parseActivity(std::ifstream& file);
        Flight* parseFlight(std::ifstream& file);
        Hotel* parseHotel(std::ifstream& file);
    public:
        TripHandler();
        TripHandler(Trip* trip);
        ~TripHandler();
        void addActivity(Activity* activity);
        void removeActivity(Activity* activity);
        void addHotel(Hotel* hotel);
        void removeHotel(Hotel* hotel);
        void addFlight(Flight* flight);
        void removeFlight(Flight* flight);

        void setTrip(Trip*);
        void extractTrip(User&);
        void importTrip(User&);
};

#endif