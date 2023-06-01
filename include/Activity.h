#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <string>

class Activity {
    private:
        std::string name;
        int time;
        double price;
    public:
        Activity(std::string, int, double);
        std::string getActivity();
        int getTime();
        std::string getName();
        double getPrice();
};

#endif