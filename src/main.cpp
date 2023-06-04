#include <iostream>
#include <stdexcept>
#include <limits>
#include <string>
#include "../include/MainMenu.h"
#include "../include/AccountHandler.h"
#include "../include/Trip.h"
#include "../include/TripHandler.h"
#include "../include/Schedule.h"
#include "../include/DummyData.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

string takeInput()
{
  string input;
  cout << "Enter an option:" << endl;
  cin >> input;
  return input;
}

int main()
{
  MainMenu menu;
  AccountHandler accountHandler;
  User user;
  DummyData dummyData;

  string input;
  bool validInput = false;

  menu.viewLogin();
  input = takeInput();
  
  while(!validInput)
  {
    try {
      if(input == "1")
      {
        user = accountHandler.login();
        validInput = true;
      }
      else if(input == "2")
      {
        accountHandler.createAccount();
        validInput = true;
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

  menu.viewOptions();
  validInput = false;

  input = "";

  while(!validInput)
  {
    if(input == "1")
    {
      menu.viewTrip();
      input = takeInput();
      validInput = true;
    }
    else if(input == "2")
    {
      menu.viewSchedule();
      input = takeInput();
      validInput = true;
    }
    else if(input == "3")
    {
      menu.viewBookingMenu();
      input = takeInput();
      validInput = true;
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
  
  if (input == "1") {
    for (unsigned i = 0; i < 5; ++i) {
      cout << i + 1 << ". " << dummyData.flights.at(i)->getFlight();
      cout << "\n";
    }
  }

  return 0;
}
