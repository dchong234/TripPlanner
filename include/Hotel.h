#ifndef HOTEL_H
#define HOTEL_H
#include <string>

class Hotel {
    private:
        std::string name;
        std::string location;
        double price;
        int rating;
    public:
        Hotel(string, string, double, int);
        std::string getName();
        std::string getLocation();
        doubble getPrice();
        int getRating();
        std::string getHotel();
};

#endif