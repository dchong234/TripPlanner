#include "../include/Hotel.h"
#include <string>

Hotel::Hotel(std::string name, std::string location, double price, int rating){
    this->name = name;
    this->location = location;
    this->price = price;
    this->rating = rating;
}

std::string Hotel::getName(){
    return this->name;
}

std::string Hotel::getLocation(){
    return this->location;
}

double Hotel::getPrice(){
    return this->price;
}

int Hotel::getRating(){
    return this->rating;
}

int Hotel::getHotelTime(){
    return this->time;
}

std::string Hotel::getHotel(){
    std::string hotelInfo = "Hotel Name: " + this->name + "\n";
    hotelInfo += "Location: " + this->location + "\n";
    hotelInfo += "Price: $" + std::to_string(this->price) + "\n";
    hotelInfo += "Rating: " + std::to_string(this->rating) + " stars\n";
    hotelInfo += "Check-in Time: " + std::to_string(this->time) + "\n";
    
    return hotelInfo;
}
