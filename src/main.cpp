#include <iostream>
#include <stdexcept>
#include <limits>
#include <string>
#include "../include/MainMenu.h"
#include "../include/AccountHandler.h"

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

  accountHandler.printAccounts();

  string input;
  bool validInput = false;

  menu.viewLogin();
  input = takeInput();
  
  while(!validInput)
  {
    try {
      if(input == "1")
      {
        accountHandler.login();
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
  

  return 0;
}
