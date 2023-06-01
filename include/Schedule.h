#ifndef SCHEDULE_H
#define SCHEDULE_H
#include "Activity.h"

#include "Trip.h"
#include <vector>

class Schedule {
    private:
        Trip* trip;
    public:
        Schedule(Trip*);
        void getSchedule();
        void addActvity(Activity*);
        void cancelActivity();
        void viewPrevTrip();
        void viewUpcomingTrip();
};

#endif