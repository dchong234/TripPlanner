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
        break;
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

  cout << endl;

  while(true)
  {
    cout << endl;
    menu.viewOptions();
    input = "";
    input = takeInput();

    if(input == "1")
    {
      menu.viewTrip(user);
      input = takeInput();

      user.getTripStorage().at(std::stoi(input)-1)->printTripItemsList();
      tripHandler.setTrip(user.getTripStorage().at(std::stoi(input)-1));

      cout << "Would you like to add or remove an item from this trip?" << endl;
      cout << "1. Add" << endl;
      cout << "2. Remove" << endl;
      cout << "3. None" << endl;

      menu.printInput();

      input = takeInput();

      while (true) {
        if (input == "1") {
          // TODO: Refactor into its own function in main menu
          menu.printInput();

        } else if (input == "2") {
          cout << "Select which item you would like to remove" << endl;
          input = takeInput();
          tripHandler.removeTripItemByIndex(std::stoi(input)-1);
        } else if (input == "3") {
          break;
        } else {
          input = takeInput();
        }
      }
    }
    else if(input == "2") {
      menu.viewSchedule(user);
      input = takeInput();
      schedule.setTrip(user.getTripStorage().at(std::stoi(input)-1));

      schedule.getSchedule();
    }
    else if(input == "3") {
      cout << "Name your new trip:" << endl;
      cin.ignore();
      getline(cin, input);
      cout << endl;

      currTrip = new Trip(input);
      user.addTripToStorage(currTrip);
      tripHandler.setTrip(currTrip);

      menu.printInput();
    }
    else if(input == "4") {
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