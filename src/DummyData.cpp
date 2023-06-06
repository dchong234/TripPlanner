#include "../include/DummyData.h"

#include<string>
#include<vector>

DummyData::DummyData(){
    // Flight 1
    flights.push_back(new Flight("F1", "United Airlines", 800, 1130, "New York City", "Los Angeles", 250.00));
    // Flight 2
    flights.push_back(new Flight("F2", "Delta Air Lines", 1030, 1415, "Chicago", "Atlanta", 180.50));
    // Flight 3
    flights.push_back(new Flight("F3", "American Airlines", 1245, 1620, "Los Angeles", "Miami", 320.75));
    // Flight 4
    flights.push_back(new Flight("F4", "Southwest Airlines", 915, 1145, "Dallas", "Houston", 120.00));
    // Flight 5
    flights.push_back(new Flight("F5", "JetBlue Airways", 730, 945, "Washington D.C.", "Boston", 150.25));
    // Flight 6
    flights.push_back(new Flight("F6", "Air Canada", 1500, 1930, "Toronto", "Vancouver", 380.50));
    // Flight 7
    flights.push_back(new Flight("F7", "Lufthansa", 645, 930, "Frankfurt", "London", 280.75));
    // Flight 8
    flights.push_back(new Flight("F8", "Emirates", 1130, 1615, "Sydney", "Dubai", 850.00));
    // Flight 9
    flights.push_back(new Flight("F9", "British Airways", 1415, 1900, "London", "New York City", 550.25));
    // Flight 10
    flights.push_back(new Flight("F10", "Singapore Airlines", 2130, 545, "Singapore", "Tokyo", 670.50));
    // Flight 11
    flights.push_back(new Flight("F11", "Qantas", 800, 1030, "Sydney", "Melbourne", 180.00));
    // Flight 12
    flights.push_back(new Flight("F12", "Cathay Pacific", 1200, 1830, "Hong Kong", "San Francisco", 720.75));
    // Flight 13
    flights.push_back(new Flight("F13", "Air France", 615, 1400, "Johannesburg", "Paris", 580.00));
    // Flight 14
    flights.push_back(new Flight("F14", "KLM Royal Dutch Airlines", 1045, 1330, "Amsterdam", "Rome", 320.25));
    // Flight 15
    flights.push_back(new Flight("F15", "Qatar Airways", 2330, 515, "Doha", "Sydney", 980.50));


    // Hotel 1
    hotels.push_back(new Hotel("H1", "Grand Hotel", "New York City", 200.00, 4, 800));
    // Hotel 2
    hotels.push_back(new Hotel("H2", "Luxury Resort", "Maldives", 500.00, 5, 800));
    // Hotel 3
    hotels.push_back(new Hotel("H3", "Cozy Inn", "Paris", 150.00, 3, 800));
    // Hotel 4
    hotels.push_back(new Hotel("H4", "Seaside Retreat", "Miami", 300.00, 4, 800));
    // Hotel 5
    hotels.push_back(new Hotel("H5", "Mountain View Lodge", "Aspen", 250.00, 4, 800));
    // Hotel 6
    hotels.push_back(new Hotel("H6", "Urban Oasis", "Tokyo", 180.00, 3, 800));
    // Hotel 7
    hotels.push_back(new Hotel("H7", "Historic Inn", "Boston", 220.00, 4, 800));
    // Hotel 8
    hotels.push_back(new Hotel("H8", "Beachfront Resort", "Bali", 350.00, 5, 800));
    // Hotel 9
    hotels.push_back(new Hotel("H9", "City Center Hotel", "London", 190.00, 3, 800));
    // Hotel 10
    hotels.push_back(new Hotel("H10", "Ski Lodge", "Vancouver", 280.00, 4, 800));
    // Hotel 11
    hotels.push_back(new Hotel("H11", "Desert Retreat", "Dubai", 400.00, 5, 800));
    // Hotel 12
    hotels.push_back(new Hotel("H12", "Charming Cottage", "Cape Town", 180.00, 3, 800));
    // Hotel 13
    hotels.push_back(new Hotel("H13", "Riverside Inn", "Prague", 220.00, 4, 800));
    // Hotel 14
    hotels.push_back(new Hotel("H14", "Tropical Paradise Resort", "Phuket", 320.00, 5, 800));
    // Hotel 15
    hotels.push_back(new Hotel("H15", "Historic Mansion", "Rome", 250.00, 4, 800));



    // Activity 1
    activities.push_back(new Activity("A1", "City Tour", 1130, 50.00));
    // Activity 2
    activities.push_back(new Activity("A2", "Beach Volleyball", 800, 20.00));
    // Activity 3
    activities.push_back(new Activity("A3", "Hiking Adventure", 1000, 40.00));
    // Activity 4
    activities.push_back(new Activity("A4", "Cooking Class", 1730, 60.00));
    // Activity 5
    activities.push_back(new Activity("A5", "Wine Tasting", 2100, 70.00));
    // Activity 6
    activities.push_back(new Activity("A6", "Scuba Diving", 1245, 100.00));
    // Activity 7
    activities.push_back(new Activity("A7", "Sightseeing Cruise", 1500, 85.00));
    // Activity 8
    activities.push_back(new Activity("A8", "Cultural Dance Show", 1700, 30.00));
    // Activity 9
    activities.push_back(new Activity("A9", "Zip Line Adventure", 1300, 50.00));
    // Activity 10
    activities.push_back(new Activity("A10", "Guided Museum Tour", 1000, 25.00));
    // Activity 11
    activities.push_back(new Activity("A11", "Bike Rental", 800, 15.00));
    // Activity 12
    activities.push_back(new Activity("A12", "Helicopter Ride", 1500, 200.00));
    // Activity 13
    activities.push_back(new Activity("A13", "Yoga Retreat", 600, 40.00));
    // Activity 14
    activities.push_back(new Activity("A14", "Surfing Lesson", 1030, 50.00));
    // Activity 15
    activities.push_back(new Activity("A15", "Wildlife Safari", 930, 120.00));


}

DummyData::~DummyData(){
    for (TripItem* flight : flights) {
        delete flight;
        flight = nullptr;
    }

    flights.clear();

    for (TripItem* hotel : hotels) {
        delete hotel;
        hotel = nullptr;
    }

    hotels.clear();

    for (TripItem* activity : activities) {
        delete activity;
        activity = nullptr;
    }

    activities.clear();
}