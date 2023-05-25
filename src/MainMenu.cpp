#include "../include/MainMenu.h"
#include <iostream>

MainMenu::MainMenu() {}

void MainMenu::viewOptions() {
    std::cout << "Welcome!" << std::endl; // TODO: Add username
    std::cout << "1. View Trips" << std::endl;
    std::cout << "2. View Schedule" << std::endl;
    std::cout << "3. Plan Trip" << std::endl;
    std::cout << "4. Logout" << std::endl;
}

void MainMenu::viewTrip() {
    std::cout << "Select your trip:" << std::endl;
    // TODO: Add input handling
}

void MainMenu::viewBookingMenu() {
    std::cout << "1. Book Flight" << std::endl;
    std::cout << "2. Book Activities" << std::endl;
    std::cout << "3. Book Hotel" << std::endl;
}

void MainMenu::viewSchedule() {
    // TODO: Implement based on trip.
}