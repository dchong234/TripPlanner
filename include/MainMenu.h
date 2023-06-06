#ifndef MAINMENU_H
#define MAINMENU_H

// #include "../include/User.h"
// #include "../include/Schedule.h"

#include "TripHandler.h"
#include "TripItem.h"
#include "DummyData.h"

#include <string>
#include <vector>

class MainMenu {
    private:
        DummyData dummyData;
    public:
        /* Main Menu helper functions */
        void printPage(std::string type, int page);
        void printSelectionPage(std::string type, TripHandler& tripHandler);
    public:
        void viewOptions();
        void viewTrip();
        void viewSchedule();
        void viewBookingMenu();
        void viewLogin();
        MainMenu();
    private:
        std::string takeInput();
};

#endif