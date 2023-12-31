#ifndef SCHEDULE_H
#define SCHEDULE_H
#include "Activity.h"

#include "Trip.h"
#include <vector>
#include <string>

class Schedule {
    private:
        Trip* trip;
    public:
        Schedule();
        Schedule(Trip*);
        ~Schedule();
        void getSchedule();
        void addActvity(Activity*);
        void cancelActivity();
        void viewPrevTrip();
        void viewUpcomingTrip();

        void setTrip(Trip*);

        void printStuff();
        std::string formatTime(int) const;
};

#endif