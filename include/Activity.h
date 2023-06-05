#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <string>
#include <fstream>

class Activity : TripItem {
    private:
        std::string name;
        double time;
        double price;
    public:
        Activity(std::string, double, double);
        std::string getItem();
        double getTime();
        std::string getName();
        double getPrice();
        void extractActivity(std::ofstream&);
};

#endif