#include "Trip.h"
#include <string>
#include <vector>

Trip::Trip(string name){
    this->name = name;
}

string Trip::getTripName(){
    return this->name;
}

