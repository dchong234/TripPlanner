#ifndef FLIGHT_H
#define FLIGHT_H
#include <string>

class Flight {
    private:
        string name;
        string time;
        double price;
    public:
        Flight();
        string getFlight();
}

#endif