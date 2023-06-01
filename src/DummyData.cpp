#include "../include/DummyData.h"

#include<string>
#include<vector>


DummyData::DummyData(){
    // Flight 1
    flights.push_back(new Flight("United Airlines", 800, 1130, "New York", "Los Angeles", 250.00));
    // Flight 2
    flights.push_back(new Flight("Delta Air Lines", 1030, 1415, "Chicago", "Atlanta", 180.50));
    // Flight 3
    flights.push_back(new Flight("American Airlines", 1245, 1620, "Los Angeles", "Miami", 320.75));
    // Flight 4
    flights.push_back(new Flight("Southwest Airlines", 915, 1145, "Dallas", "Houston", 120.00));
    // Flight 5
    flights.push_back(new Flight("JetBlue Airways", 730, 945, "Boston", "Washington D.C.", 150.25));
    // Flight 6
    flights.push_back(new Flight("Air Canada", 1500, 1930, "Toronto", "Vancouver", 380.50));
    // Flight 7
    flights.push_back(new Flight("Lufthansa", 645, 930, "Frankfurt", "London", 280.75));
    // Flight 8
    flights.push_back(new Flight("Emirates", 1130, 1615, "Dubai", "Sydney", 850.00));
    // Flight 9
    flights.push_back(new Flight("British Airways", 1415, 1900, "London", "New York", 550.25));
    // Flight 10
    flights.push_back(new Flight("Singapore Airlines", 2130, 545, "Singapore", "Tokyo", 670.50));
    // Flight 11
    flights.push_back(new Flight("Qantas", 800, 1030, "Sydney", "Melbourne", 180.00));
    // Flight 12
    flights.push_back(new Flight("Cathay Pacific", 1200, 1830, "Hong Kong", "San Francisco", 720.75));
    // Flight 13
    flights.push_back(new Flight("Air France", 615, 1400, "Paris", "Johannesburg", 580.00));
    // Flight 14
    flights.push_back(new Flight("KLM Royal Dutch Airlines", 1045, 1330, "Amsterdam", "Rome", 320.25));
    // Flight 15
    flights.push_back(new Flight("Qatar Airways", 2330, 515, "Doha", "Sydney", 980.50));


    // Hotel 1
    hotels.push_back(new Hotel("Grand Hotel", "New York City", 200.00, 4));
    // Hotel 2
    hotels.push_back(new Hotel("Luxury Resort", "Maldives", 500.00, 5));
    // Hotel 3
    hotels.push_back(new Hotel("Cozy Inn", "Paris", 150.00, 3));
    // Hotel 4
    hotels.push_back(new Hotel("Seaside Retreat", "Miami Beach", 300.00, 4));
    // Hotel 5
    hotels.push_back(new Hotel("Mountain View Lodge", "Aspen", 250.00, 4));
    // Hotel 6
    hotels.push_back(new Hotel("Urban Oasis", "Tokyo", 180.00, 3));
    // Hotel 7
    hotels.push_back(new Hotel("Historic Inn", "Boston", 220.00, 4));
    // Hotel 8
    hotels.push_back(new Hotel("Beachfront Resort", "Bali", 350.00, 5));
    // Hotel 9
    hotels.push_back(new Hotel("City Center Hotel", "London", 190.00, 3));
    // Hotel 10
    hotels.push_back(new Hotel("Ski Lodge", "Whistler", 280.00, 4));
    // Hotel 11
    hotels.push_back(new Hotel("Desert Retreat", "Dubai", 400.00, 5));
    // Hotel 12
    hotels.push_back(new Hotel("Charming Cottage", "Cape Town", 180.00, 3));
    // Hotel 13
    hotels.push_back(new Hotel("Riverside Inn", "Prague", 220.00, 4));
    // Hotel 14
    hotels.push_back(new Hotel("Tropical Paradise Resort", "Phuket", 320.00, 5));
    // Hotel 15
    hotels.push_back(new Hotel("Historic Mansion", "Rome", 250.00, 4));


    // Activity 1
    activities.push_back(new Activity("City Tour", 120, 50.00));
    // Activity 2
    activities.push_back(new Activity("Beach Volleyball", 90, 20.00));
    // Activity 3
    activities.push_back(new Activity("Hiking Adventure", 180, 40.00));
    // Activity 4
    activities.push_back(new Activity("Cooking Class", 150, 60.00));
    // Activity 5
    activities.push_back(new Activity("Wine Tasting", 120, 70.00));
    // Activity 6
    activities.push_back(new Activity("Scuba Diving", 240, 100.00));
    // Activity 7
    activities.push_back(new Activity("Sightseeing Cruise", 180, 80.00));
    // Activity 8
    activities.push_back(new Activity("Cultural Dance Show", 120, 30.00));
    // Activity 9
    activities.push_back(new Activity("Zip Line Adventure", 90, 50.00));
    // Activity 10
    activities.push_back(new Activity("Guided Museum Tour", 120, 25.00));
    // Activity 11
    activities.push_back(new Activity("Bike Rental", 60, 15.00));
    // Activity 12
    activities.push_back(new Activity("Helicopter Ride", 60, 200.00));
    // Activity 13
    activities.push_back(new Activity("Yoga Retreat", 120, 40.00));
    // Activity 14
    activities.push_back(new Activity("Surfing Lesson", 90, 50.00));
    // Activity 15
    activities.push_back(new Activity("Wildlife Safari", 240, 120.00));

}