#include "../include/Activity.h"
#include <iostream>

Activity::Activity(std::string name, std::string time, double price)
{
  this->name = name;
  this->time = time;
  this->price = price;
}

std::string Activity::getActivity()
{
  std::string activityInfo = "Activity Name: " + name + "\n";
  activityInfo += "Time: " + time + "\n";
  activityInfo += "Price: $" + std::to_string(price) + "\n";

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

double Activity::getPrice()
{
  return this->price;
}