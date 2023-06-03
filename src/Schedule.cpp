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
    for (auto x :  *(this->trip->getFlights())) {
      if (x->getDepartureTime() == time) {
        std::cout << time << " " << x->getAirline() << std::endl;
        time += 30;
        if (((time % 100) / 10) > 5) {
          time += 40;
        }
        continue;
      }
    }

    for (auto x : *(this->trip->getHotels())) {
      if (x->getHotelTime() == time) {
        std::cout << time << " " << x->getName() << std::endl;
        time += 30;
        if (((time % 100) / 10) > 5) {
          time += 40;
        }
        continue;
      }
    }

    for (auto x : *(this->trip->getActivities())) {
      if (x->getTime() == time) {
        std::cout << time << " " << x->getName() << std::endl;
        time += 30;
        if (((time % 100) / 10) > 5) {
          time += 40;
        }
        continue;
      }
    }

    std::cout << time << std::endl;
    time += 30;

    if (((time % 100) / 10) > 5) {
      time += 40;
    }
  }
}

void Schedule::printStuff() {
  std::cout << trip->getActivities()->at(0)->getName() << std::endl;
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