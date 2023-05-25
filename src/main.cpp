#include <iostream>
#include "../include/MainMenu.h"
#include "../include/AccountHandler.h"


int takeInput()
{
  int input;
  std::cout << "Enter an option:" << std::endl;
  std::cin >> input;
  return input;
}

int main()
{
  // MainMenu menu;
  AccountHandler test;
  test.login();
  // test.printAccounts();
  // test.createAccount();
  // menu.viewOptions();
  // int userIntput = takeInput();
  // std::cout << "User inputted: " << userIntput << std::endl;
  return 0;
}
