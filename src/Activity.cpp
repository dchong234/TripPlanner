#include "Activity.h"
#include <iostream>

Activity::Activity(string name, string time, double price)
{
  this->name = name;
  this->time = time;
  this->price = price;
}

string Activity::getActivity()
{
  string actvityInfo = "Activity Name: " + name + "\n";
  actvityInfo += "Time: " + time + "\n";
  activityInfo += "Price: $" + to_string(price) + "\n";

  return activityInfo;
}

string Activity::getTime()
{
  return this->time;
}

string Activity::getName()
{
  return this->name;
}

string Activity::getPrice()
{
  return this->price;
}