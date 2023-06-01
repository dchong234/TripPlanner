#ifndef HOTEL_H
#define HOTEL_H
#include <string>

class Hotel {
    private:
        std::string name;
        std::string location;
        double price;
        int rating;
        int time;
    public:
        Hotel(std::string, std::string, double, int);
        std::string getName();
        std::string getLocation();
        double getPrice();
        int getRating();
        std::string getHotel();
        int getHotelTime();
};

#endif