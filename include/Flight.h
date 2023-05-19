#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>

class Flight {
    private:
        std::string airline;
        std::string departureTime;
        std::string arrivalTime;
        std::string origin;
        std::string desination;
        double price;
    public:
        Flight(std::string airline, std::string departureTime, std::string arrivalTime,
        std::string origin, std::string desination, double price);
        std::string getAirline();
        std::string getDepartureTime();
        std::string getArrivalTime();
        std::string getOrigin();
        std::string getDestination();
        std::string getPrice();
        std::string getFlight();
};

#endif