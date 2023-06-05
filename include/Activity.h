#ifndef ACTIVITY_H
#define ACTIVITY_H

#include "TripItem.h"

#include <string>
#include <fstream>

class Activity : public TripItem {
    private:
        std::string name;
        int time;
        double price;
    public:
        Activity(std::string, std::string, int, double);
        std::string getItem();
        int getTime();
        std::string getName();
        double getPrice();
        void extractActivity(std::ofstream&);
};

#endif