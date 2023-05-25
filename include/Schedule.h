#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "Trip.h"
#include <vector>

class Schedule {
    private:
        vector<Trip> trips;
    public:
        void getSchedule();
        void addActvity();
        void cancelActivity();
        void viewPrevTrip();
        void viewUpcomingTrip();
};

#endif