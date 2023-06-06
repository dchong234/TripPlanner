#include  "../include/Schedule.h"
#include <iostream>

Schedule::Schedule(Trip* trip){
  this->trip = trip;
}

Schedule::~Schedule() {
}

void Schedule::getSchedule(){
  int time = 800;

  for(int i = 0; i < 10; i++){
    for (TripItem* item : *(this->trip->getTripItems())) {
      if (item->getStartTime() == time) {
        std::cout << formatTime(time) << " " << item->getName() << std::endl;
        break;
      }
    }

    std::cout << formatTime(time) << std::endl;
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