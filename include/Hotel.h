#ifndef HOTEL_H
#define HOTEL_H
#include <string>

class Hotel {
    private:
        std::string name;
        std::string location;
        double price;
        int rating;
        double time;
    public:
        Hotel(std::string, std::string, double, int, double);
        std::string getName();
        std::string getLocation();
        double getPrice();
        int getRating();
        std::string getHotel();
        double getHotelTime();
        void extractHotel(std::string);
};

#endif