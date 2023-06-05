#include "../include/Activity.h"
#include <string>
#include <iostream>

Activity::Activity(std::string id, std::string name, int time, double price) : TripItem(id, ACTIVITY)
{
  this->name = name;
  this->time = time;
  this->price = price;
}

std::string Activity::getItem()
{
  std::string activityInfo = "Activity Name: " + name + "\n";
  activityInfo += "Time: " + formatTime(time) + "\n";
  activityInfo += "Price: $" + std::to_string(price) + "\n";

  return activityInfo;
}

int Activity::getTime()
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
  outFS << id << "/" << name << "/" << time << "/" << price << "/" << std::endl;
}