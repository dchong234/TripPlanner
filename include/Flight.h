#ifndef FLIGHT_H
#define FLIGHT_H
#include "TripItem.h"
#include <string>
#include <fstream>

class Flight : public TripItem {
    private:
        std::string airline;
        std::string origin;
        std::string destination;
        double price;
    public:
        Flight(std::string id, std::string airline, int departureTime, int arrivalTime,
        std::string origin, std::string desination, double price);
        Flight(const Flight& other);
        Flight& operator=(const Flight& other);
        ~Flight() {}
        std::string getAirline();
        std::string getOrigin();
        std::string getDestination();
        double getPrice();
        std::string getItem();
        void extractItem(std::ofstream&);
};

#endif