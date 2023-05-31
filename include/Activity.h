#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <string>

class Activity {
    private:
        std::string name;
        std::string time;
        double price;
    public:
        Activity(std::string, std::string, double);
        std::string getActivity();
        std::string getTime();
        std::string getName();
        double getPrice();
};

#endif