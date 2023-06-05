#include "../include/Activity.h"
#include <string>
#include <iostream>

Activity::Activity(std::string name, double time, double price)
{
  this->name = name;
  this->time = time;
  this->price = price;
}

std::string Activity::getItem()
{
  std::string activityInfo = "Activity Name: " + name + "\n";
  activityInfo += "Time: " + std::to_string(time) + "\n";
  activityInfo += "Price: $" + std::to_string(price) + "\n";

  return activityInfo;
}

double Activity::getTime()
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

void Activity::extractActivity(std::ofstream& outFS)
{
  outFS << "activity/";
  outFS << name << "/" << time << "/" << price << "/" << std::endl;
}