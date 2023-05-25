#ifndef MAINMENU_H
#define MAINMENU_H

#include "User.h"
#include "Schedule.h"

#include <string>

class MainMenu {
    public:
        void viewOptions();
        void viewTrip();
        void viewSchedule();
        void viewBookingMenu();
        MainMenu();
};

#endif