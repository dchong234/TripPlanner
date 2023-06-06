#include  "../include/Schedule.h"
#include <iostream>

Schedule::Schedule() : trip(nullptr) {}

Schedule::Schedule(Trip* trip){
  this->trip = trip;
}

Schedule::~Schedule() {
}

void Schedule::getSchedule(){
  int time = 800;
  bool flag = false;

  for(int i = 0; i < 10; i++){
    for (TripItem* item : *(this->trip->getTripItems())) {
      if (item->getStartTime() == time) {
        std::cout << formatTime(time) << " " << item->getName() << std::endl;
        flag = true;
        break;
      }
    }

    if (!flag) {
      std::cout << formatTime(time) << std::endl;
    } else {
      flag = false;
    }

    time += 30;

    if (((time % 100) / 10) > 5) {
      time += 40;
    }
  }
}

void Schedule::printStuff() {
  return;
}

void Schedule::addActvity(Activity* activity){
  return;
}

void Schedule::cancelActivity(){
  return;
}

void Schedule::viewPrevTrip(){
  return;
}

void Schedule::viewUpcomingTrip(){
  return;
}

void Schedule::setTrip(Trip* trip) {
  this->trip = trip;
}

std::string  Schedule::formatTime(int time) const {
  int hours = time / 100;
  int minutes = time % 100;
  std::tm tm = {};
  tm.tm_hour = hours;
  tm.tm_min = minutes;
  std::ostringstream oss;
  oss << std::put_time(&tm, "%I:%M %p");
  return oss.str();
}