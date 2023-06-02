#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <string>

class Activity {
    private:
        std::string name;
        double time;
        double price;
    public:
        Activity(std::string, double, double);
        std::string getActivity();
        double getTime();
        std::string getName();
        double getPrice();
        void extractActivity(std::string);
};

#endif