#include <iostream>
#include <stdexcept>
#include <limits>
#include <string>
#include <vector>

#include "../include/MainMenu.h"
#include "../include/AccountHandler.h"
#include "../include/Trip.h"
#include "../include/TripHandler.h"
#include "../include/Schedule.h"
#include "../include/DummyData.h"
#include "../include/TripItem.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

string takeInput();
string checkValidInput(string);

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"

int main()
{
  MainMenu menu;

  AccountHandler accountHandler;
  User user;

  Trip* currTrip = nullptr;
  TripHandler tripHandler;

  Schedule schedule;

  string input;

  menu.viewLogin();
  input = takeInput();
  
  while(true)
  {
    try {
      if(input == "1")
      {
        user = accountHandler.login();
        break;
      }
      else if(input == "2")
      {
        accountHandler.createAccount();
        cout << GREEN << "Account successfully created!" << RESET << endl;
        return 0;
      }
      else
      {
        input = takeInput();
      }
    } catch (std::runtime_error& e) {
      cout << e.what() << endl;
      return 1;
    }
  }

  user.importTrips();

  cout << endl;

  while(true)
  {
    cout << endl;
    menu.viewOptions(user);
    input = "";
    input = takeInput();

    if(input == "1")
    {
      if (user.getTripStorage().empty()) {
        menu.printUserTrips(user); 
      } else {
        menu.viewTrip(user);
        input = takeInput(); 

        int storageIdx = std::stoi(input)-1;

        currTrip = user.getTripStorage().at(storageIdx);
        tripHandler.setTrip(currTrip);

        cout << "Would you like to remove or edit this trip?" << endl;
        cout << GREEN << "1. Edit" << RESET << endl;
        cout << RED << "2. Remove (This action is irreversible)" << RESET << endl;
        cout << YELLOW << "3. None" << RESET << endl;

        input = takeInput();

        if (input == "1") {
          cout << "Would you like to add or remove an item from this trip?" << endl;
          cout << GREEN << "1. Add" << RESET << endl;
          cout << RED << "2. Remove" << RESET<< endl;
          cout << YELLOW << "3. None" << RESET<< endl;

          input = takeInput();

          if (input == "1") {
            menu.viewBookingMenu();
            menu.printInput(tripHandler);
          } else if (input == "2") {
            cout << "Select which item you would like to remove" << endl;
            currTrip->printTripItemsList();
            input = takeInput();
            tripHandler.removeTripItemByIndex(std::stoi(input)-1);
          } else if (input == "3") {
            continue;
          } else {
            input = takeInput();
          }
        } else if (input == "2") {
          cout << "Trip: " << currTrip->getTripName() << " deleted." << endl;
          user.removeTripFromStorage(currTrip);
          currTrip = nullptr;
        } else if (input == "3"){
          continue;
        } else {
          input = takeInput();
        }

      }
    }
    else if(input == "2") {
      if (user.getTripStorage().empty()) {
        menu.printUserTrips(user); 
      } else {
        menu.viewSchedule(user);
      }
    }
    else if(input == "3") {
      cout << "Name your new trip:" << endl;
      cin.ignore();
      getline(cin, input);
      cout << endl;

      currTrip = new Trip(input);
      user.addTripToStorage(currTrip);
      tripHandler.setTrip(currTrip);

      menu.printInput(tripHandler);
    }
    else if(input == "4") {
      user.exportTrips();
      return 0;
    } else {
      input = takeInput();
    }
  }
  return 0;
}

string takeInput() {
  string input;
  cout << "Enter an option:" << endl;
  cin >> input;
  return input;
}