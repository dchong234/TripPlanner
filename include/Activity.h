#ifndef ACTIVITY_H
#define ACTIVITY_H

#include "TripItem.h"

#include <string>
#include <fstream>

class Activity : public TripItem {
    private:
        std::string name;
        double price;
    public:
        Activity(std::string, std::string, int, double);
        Activity(const Activity& other);
        std::string getItem();
        std::string getName();
        double getPrice();
        void extractItem(std::ofstream&);
};

#endif