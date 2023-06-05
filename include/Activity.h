#ifndef ACTIVITY_H
#define ACTIVITY_H

#include "TripItem.h"

#include <string>
#include <fstream>

class Activity : public TripItem {
    private:
        std::string name;
        double time;
        double price;
    public:
        Activity(std::string, std::string, double, double);
        std::string getItem();
        double getTime();
        std::string getName();
        double getPrice();
        void extractActivity(std::ofstream&);
};

#endif