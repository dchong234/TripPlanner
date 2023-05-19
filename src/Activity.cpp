#include "Activity.h"
#include <iostream>

Activity::Activity(string name, string time, double price)
{
  this->name = name;
  this->time = time;
  this->price = price;
}

std::string Activity::getActivity()
{
  std::string actvityInfo = "Activity Name: " + name + "\n";
  actvityInfo += "Time: " + time + "\n";
  activityInfo += "Price: $" + to_string(price) + "\n";

  return activityInfo;
}

std::string Activity::getTime()
{
  return this->time;
}

std::string Activity::getName()
{
  return this->name;
}

std::string Activity::getPrice()
{
  return this->price;
}