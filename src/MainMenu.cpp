#include "../include/MainMenu.h"
#include "../include/TripHandler.h"
#include <iostream>
#include <stdexcept>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"

MainMenu::MainMenu() {}

void MainMenu::viewOptions(User &user) {
    //system("clear");
    std::cout << "Welcome " << user.getUsername() << "!" << std::endl; // TODO: Add username
    std::cout << "1. Edit Trips" << std::endl;
    std::cout << "2. View Schedule" << std::endl;
    std::cout << "3. Plan Trip" << std::endl;
    std::cout << "4. Logout" << std::endl;
}

void MainMenu::viewTrip(User &user) {
    std::cout << "Select your trip:" << std::endl;
    printUserTrips(user);
}

void MainMenu::viewBookingMenu() {
    system("clear");
    std::cout << "1. Book Flight" << std::endl;
    std::cout << "2. Book Activities" << std::endl;
    std::cout << "3. Book Hotel" << std::endl;
    std::cout << "4. Done Planning" << std::endl;
}

void MainMenu::viewSchedule(User &user) {
    std::cout << "Which trip do you want to access?" << std::endl;
    printUserTrips(user);
}

void MainMenu::printUserTrips(User &user){
  if(user.getTripStorage().empty()){
    std::cout << RED << "There are no trips in your account" << RESET << std::endl;
  }
  else{
    system("clear");
    for(int i = 0; i<user.getTripStorage().size(); i++){
      std::cout << i+1 <<". " << user.getTripStorage().at(i)->getTripName() << std::endl;
    }
  }
}

void MainMenu::viewLogin() {
  std::cout << std::endl;
  std::cout << "-----------------" << std::endl;
  std::cout << YELLOW << " Travel Planner " << RESET << std::endl;
  std::cout << "-----------------" << std::endl;
  std::cout << "1. Login" << std::endl;
  std::cout << "2. Create Account" << std::endl;
}

void MainMenu::printPage(std::string type, int page)
{
  unsigned i = 0;
  unsigned upperLimit = i;
  std::string input = "";
  std::vector<TripItem*> dummyItems;

  if (type == "flight") {
    dummyItems = dummyData.flights;
  } else if (type == "activity") {
    dummyItems = dummyData.activities;
  } else if (type == "hotel") {
    dummyItems = dummyData.hotels;
  }

  if (page == 2) {
    i = 5;
  }

  upperLimit = i + 5;

  for (i; i < upperLimit; ++i) {
    std::cout << i + 1 << ". " << dummyItems.at(i)->getItem();
    std::cout << std::endl;
  }

  std::cout << std::endl;
  std::cout << "PAGE " << page << " OF 2" << std::endl;
  std::cout << std::endl;
}

void MainMenu::printSelectionPage(std::string type, TripHandler& tripHandler) {
  system("clear");
  std::vector<TripItem*> dummyItems;

  std::string input = "";

  if (type == "flight") {
    dummyItems = dummyData.flights;
  } else if (type == "activity") {
    dummyItems = dummyData.activities;
  } else if (type == "hotel") {
    dummyItems = dummyData.hotels;
  }

  for(unsigned i = 0; i < 2; i++) {
    printPage(type, i+1);
    if (type == "activity") {
      std::cout << "Show more activities? " << GREEN << "Yes" << RESET << " or " << RED << "No" << RESET << std::endl;
    } else {
      std::cout << "Show more " << type << "s? " << GREEN << "Yes" << RESET << " or " << RED << "No" << RESET<< std::endl;
    }
    input = takeInput();
    if (input == "Yes" || input == "yes") {
      continue;
    }
    else if (input == "No" || input == "no") {
      std::cout << "Please select a " << type << " number" << std::endl;
      while (true) {
        try {
            input = takeInput();
            tripHandler.addTripItem(dummyItems.at(std::stoi(input)-1));
            break;
        } catch (std::invalid_argument& e) {
            std::cerr << "Please enter a valid number" << std::endl;
            std::cin.clear();
            continue;
        } catch (std::out_of_range& e) {
            std::cerr << "Please enter a valid number" << std::endl;
            std::cin.clear();
            continue;
        }
      }
      break;
    }
  }
}

void MainMenu::printInput(TripHandler& tripHandler){
  system("clear");
  std::string input = "";
  while (true) {
    viewBookingMenu();
    input = takeInput();

    if (input == "1") {
      printSelectionPage("flight", tripHandler);
    }

    else if (input == "2") {
      printSelectionPage("activity", tripHandler);
    }

    else if (input == "3") {
      printSelectionPage("hotel", tripHandler);
    } 
    else if (input == "4") {
      break;
    }
  }
}



std::string MainMenu::takeInput() {
  std::string input;
  std::cout << "Enter an option:" << std::endl;
  std::cin >> input;
  return input;
}