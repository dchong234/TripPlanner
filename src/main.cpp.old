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

DummyData dummyData;

string takeInput();

int main()
{
  MainMenu menu;
  AccountHandler accountHandler;
  User user;

  Trip* currTrip = nullptr;
  TripHandler tripHandler;

  string input;
  bool validInput = false;

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
    menu.viewOptions();
    input = "";
    input = takeInput();

    if(input == "1")
    {
      menu.viewTrip();
      input = takeInput();
    }
    else if(input == "2")
    {
      menu.viewSchedule();
      input = takeInput();
    }

    else if(input == "3")
    {
      cout << "Name your new trip:" << endl;
      getline(cin, input);
      cout << endl;

      currTrip = new Trip(input);
      tripHandler.setTrip(currTrip);

      menu.viewBookingMenu();
      input = takeInput();

      if (input == "1") {
        menu.printSelectionPage("flight", tripHandler);
      }

      else if (input == "2") {
        menu.printSelectionPage("activity", tripHandler);
      }

      else if (input == "3") {
        menu.printSelectionPage("hotel", tripHandler);
      }

    else if(input == "4")
    {
      return 0;
    }
    else
    {
      input = takeInput();
    }
  }
    return 0;
  }
}

string takeInput() {
  string input;
  cout << endl << "Enter an option:" << endl;
  cin >> input;
  return input;
}