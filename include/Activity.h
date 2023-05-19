#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <string>

class Activity {
    private:
        string name;
        string time;
        double price;
    public:
        Activity(string, string, double);
        string getActivity();
        string getTime();
        string getName();
        string getPrice();
};

#endif