#include "../include/Activity.h"
#include <string>
#include <iostream>

Activity::Activity(std::string id, std::string name, int time, double price) : TripItem(id, ACTIVITY, time, 0, name)
{
  this->name = name;
  this->price = price;
}

Activity::Activity(const Activity& other) : TripItem(other.id, ACTIVITY, other.startTime, 0, other.name) {
  this->name = other.name;
  this->price = other.price;
}

Activity& Activity::operator=(const Activity& other) {
  if (this == &other) {
    return *this;
  }

  this->id = other.id;
  this->name = other.name;
  this->startTime = other.startTime;
  this->endTime = other.endTime;
  this->price = other.price;

  return *this;
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

void Activity::extractItem(std::ofstream& outFS)
{
  outFS << "activity/";
  outFS << id << "/" << name << "/" << startTime << "/" << price << "/" << std::endl;
}