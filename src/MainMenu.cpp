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
    // TODO: Add User based Trips
}

void MainMenu::viewBookingMenu() {
    std::cout << "1. Book Flight" << std::endl;
    std::cout << "2. Book Activities" << std::endl;
    std::cout << "3. Book Hotel" << std::endl;
}

void MainMenu::viewSchedule() {
    std::cout << "Which trip do you want to access?" << std::endl;
    std::cout << "1. TEST TRIP 1" << std::endl;
    std::cout << "2. TEST TRIP 2" << std::endl;
    std::cout << "3. TEST TRIP 3" << std::endl;
}

void MainMenu::viewLogin() {
    std::cout << "--Travel Planner--" << std::endl;
    std::cout << "1. Login" << std::endl;
    std::cout << "2. Create Account" << std::endl;
}