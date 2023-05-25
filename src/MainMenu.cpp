#include "MainMenu.h"
#include <iostream>

MainMenu::MainMenu() {}

void MainMenu::viewOptions() {
    cout << "Welcome!" << endl; // TODO: Add username
    cout << "1. View Trips" << endl;
    cout << "2. View Schedule" << endl;
    cout << "3. Plan Trip" << endl
    cout << "4. Logout" << endl;
}

void MainMenu::viewTrip() {
    cout << "Select your trip:" << endl;
    // TODO: Add input handling
}

void MainMenu::viewBookingMenu() {
    cout << "1. Book Flight" << endl;
    cout << "2. Book Activities" << endl;
    cout << "3. Book Hotel" << endl;
}

void MainMenu::viewSchedule() {
    // TODO: Implement based on trip.
}