#include "Hotel.h"
#include <string>

Hotel::Hotel(string name, string location, double price, int rating){
    this->name = name;
    this->location = location;
    this->price = price;
    this->rating = rating;
}

string Hotel::getName(){
    return this->name;
}

string Hotel::getLocation(){
    return this->location;
}

double Hotel::getPrice(){
    return this->price;
}

int Hotel::getRating(){
    return this->rating;
}

string Hotel::getHotel(){
    string hotelInfo = "Hotel Name: " + this->name + "\n";
    hotelInfo += "Location: " + this->location + "\n";
    hotelInfo += "Price: $" + to_string(this->price) + "\n";
    hotelInfo += "Rating: " + to_string(this->rating) + " stars\n";
    
    return hotelInfo;
}
