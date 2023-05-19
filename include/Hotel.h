#ifndef HOTEL_H
#define HOTEL_H
#include <string>

class Hotel {
    private:
        string name;
        string location;
        double price;
        int rating;
    public:
        Hotel(string, string, double, int);
        string getName();
        string getLocation();
        doubble getPrice();
        int getRating();
        string getHotel();
};

#endif