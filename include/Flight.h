#ifndef FLIGHT_H
#define FLIGHT_H
#include "TripItem.h"
#include <string>
#include <fstream>

class Flight : public TripItem {
    private:
        std::string airline;
        int departureTime;
        int arrivalTime;
        std::string origin;
        std::string destination;
        double price;
    public:
        Flight(std::string id, std::string airline, int departureTime, int arrivalTime,
        std::string origin, std::string desination, double price);
        std::string getAirline();
        int getDepartureTime();
        int getArrivalTime();
        std::string getOrigin();
        std::string getDestination();
        double getPrice();
        std::string getItem();
        void extractFlight(std::ofstream&);
};

#endif