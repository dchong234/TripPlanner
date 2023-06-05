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

DummyData dummyData;

string takeInput()
{
  string input;
  cout << "Enter an option:" << endl;
  cin >> input;
  return input;
}

void printPage(string type, int page){
  unsigned i = 0;
  unsigned upperLimit = i;
  string input = "";
  // if(type == "flight"){
  //   std::vector<Flight*> dummyVector = dummyData.flights;
  // }
  // else if(type == "hotel"){
  //   std::vector<Hotel*> dummyVector = dummyData.hotels;
  // }
  // else{
  //   std::vector<Activity*> dummyVector = dummyData.activities;
  // }

  if (page == 2) {
    i = 5;
  } else if (page == 3) {
    i = 10;
  }

  upperLimit = i + 5;

  for (i; i < upperLimit; ++i) {
    cout << i + 1 << ". " << dummyData.flights.at(i)->getItem();
    cout << endl;
    }
  cout << endl;
  cout << "PAGE " << page << " OF 3" << endl;
  cout << endl;
}

int main()
{
  MainMenu menu;
  AccountHandler accountHandler;
  User user;

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
      unsigned i;
      if (input == "1") {
        printPage("flight", 1);
        cout << "Show more flights? Yes or No" << endl;
        input = takeInput();
        if (input == "Yes" || input == "yes") {
          printPage("flight", 2);
        }
        else if (input == "No" || input == "no") {
          break;
        }
        cout << "Show more flights? Yes or No" << endl;
        input = takeInput();
        if (input == "Yes" || input == "yes") {
          printPage("flight", 3);
        }
        else if (input == "No" || input == "no") {
          break;
        }
      }

      if (input == "2") {
        for (i = 0; i < 5; ++i) {
          cout << i + 1 << ". " << dummyData.activities.at(i)->getItem();
          cout << "\n";
        }
        cout << "\n";
        cout << "PAGE 1 OF 3" << endl;
        cout << "\n";
        cout << "Show more activities? Yes or No" << endl;
        input = takeInput();
        if (input == "Yes" || input == "yes") {
          for (i = 5; i < 10; ++i) {
            cout << i + 1 << ". " << dummyData.activities.at(i)->getItem();
            cout << "\n";
          }
          cout << "\n";
          cout << "PAGE 2 OF 3" << endl;
          cout << "\n";
        }
        else if (input == "No" || input == "no") {
          break;
        }
        cout << "Show more activities? Yes or No" << endl;
        input = takeInput();
        if (input == "Yes" || input == "yes") {
          for (i = 10; i < 15; ++i) {
            cout << i + 1 << ". " << dummyData.activities.at(i)->getItem();
            cout << "\n";
          }
          cout << "\n";
          cout << "PAGE 3 OF 3" << endl;
          cout << "\n";
        }
        else if (input == "No" || input == "no") {
          break;
        }
      }

      if (input == "3") {
        for (i = 0; i < 5; ++i) {
          cout << i + 1 << ". " << dummyData.hotels.at(i)->getItem();
          cout << "\n";
        }
        cout << "\n";
        cout << "PAGE 1 OF 3" << endl;
        cout << "\n";
        cout << "Show more hotels? Yes or No" << endl;
        input = takeInput();
        if (input == "Yes" || input == "yes") {
          for (i = 5; i < 10; ++i) {
            cout << i + 1 << ". " << dummyData.hotels.at(i)->getItem();
            cout << "\n";
          }
          cout << "\n";
          cout << "PAGE 1 OF 3" << endl;
          cout << "\n";
        }
        else if (input == "No" || input == "no") {
          break;
        }
        cout << "Show more hotels? Yes or No" << endl;
        input = takeInput();
        if (input == "Yes" || input == "yes") {
          for (i = 10; i < 15; ++i) {
            cout << i + 1 << ". " << dummyData.hotels.at(i)->getItem();
            cout << "\n";
          }
          cout << "\n";
          cout << "PAGE 1 OF 3" << endl;
          cout << "\n";
        }
        else if (input == "No" || input == "no") {
          break;
        }
      }
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
