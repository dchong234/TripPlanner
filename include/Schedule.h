#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "Trip.h"
#include <list>

class Schedule {
    private:
        list<Trip> trips;
    public:
        void getSchedule();
        void addActvity();
        void cancelActivity();
        void viewPrevTrip();
        void viewUpcomingTrip();
};

#endif