#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>

class Flight {
    private:
        std::string airline;
        int departureTime;
        int arrivalTime;
        std::string origin;
        std::string destination;
        double price;
    public:
        Flight(std::string airline, int departureTime, int arrivalTime,
        std::string origin, std::string desination, double price);
        std::string getAirline();
        int getDepartureTime();
        int getArrivalTime();
        std::string getOrigin();
        std::string getDestination();
        double getPrice();
        std::string getFlight();
        void extractFlight(std::string filename);
};

#endif