#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include <fstream>
#include "TripItem.h"

class Hotel : public TripItem {
    private:
        std::string name;
        std::string location;
        double price;
        int rating;
    public:
        Hotel(std::string, std::string, std::string, double, int, int);
        Hotel(const Hotel& other);
        std::string getName();
        std::string getLocation();
        double getPrice();
        int getRating();
        std::string getItem();
        double getHotelTime();
        void extractItem(std::ofstream&);
};

#endif