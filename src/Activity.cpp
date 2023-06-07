#include "../include/Activity.h"
#include <string>
#include <iostream>

Activity::Activity(std::string id, std::string name, int time, double price) : TripItem(id, ACTIVITY, time, 0, name)
{
  this->name = name;
  this->price = price;
}

std::string Activity::getItem()
{
  std::string activityInfo = "Activity Name: " + name + "\n";
  activityInfo += "Time: " + formatTime(startTime) + "\n";
  activityInfo += "Price: $" + std::to_string(price) + "\n";

  return activityInfo;
}

double Activity::getPrice()
{
  return this->price;
}

void Activity::extractActivity(std::ofstream& outFS)
{
  outFS << "activity/";
  outFS << id << "/" << name << "/" << time << "/" << price << "/" << std::endl;
}