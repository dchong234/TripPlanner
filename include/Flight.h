#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>

class Flight {
    private:
        string airline;
        string departureTime;
        string arrivalTime;
        string origin;
        string desination;
        double price;
    public:
        Flight(string airline, string departureTime, string arrivalTime,
        string origin, string desination, double price);
        string getAirline();
        string getDepartureTime();
        string getArrivalTime();
        string getOrigin();
        string getDestination();
        string getPrice();
        string getFlight();
};

#endif