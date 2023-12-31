#include "gtest/gtest.h"
#include "../include/MainMenu.h"
#include "../include/AccountHandler.h"
#include "../include/Trip.h"
#include "../include/TripHandler.h"
#include "../include/Schedule.h"
#include "../include/DummyData.h"
#include "../include/TripItem.h"
#include "../include/Activity.h"
#include "../include/Flight.h"
#include "../include/Hotel.h"
#include "../include/Schedule.h"
#include "../include/User.h"

#include <string>

TEST(ActivityTests, priceTest) {
    Activity activity("A1", "kayaking", 800, 115.25);
    ASSERT_DOUBLE_EQ(activity.getPrice(), 115.25);
}

TEST(ActivityTests, itemTest) {
    Activity activity("A1", "kayaking", 800, 115.25);
    std::string correctString = "Activity Name: kayaking\n";
    correctString += "Time: 08:00 AM\n";
    correctString += "Price: $" + std::to_string(activity.getPrice()) + "\n"; 
    ASSERT_EQ(activity.getItem(), correctString);
}

TEST(FlightTests, originTest) {
    Flight flight("F1", "Southwest", 800, 1200, 
    "San Diego", "New York City", 550.75);
    EXPECT_EQ(flight.getOrigin(), "San Diego");
}

TEST(FlightTests, destinationTest) {
    Flight flight("F1", "Southwest", 800, 1200, 
    "San Diego", "New York City", 550.75);
    EXPECT_EQ(flight.getDestination(), "New York City");
}

TEST(FlightTests, getFlightItemTest) {
    Flight flight("F1", "Southwest", 800, 1200, 
    "San Diego", "New York City", 550.75);
    std::string correctString = "Airline: Southwest\n";
    correctString += "Departure Time: 08:00 AM\n";
    correctString += "Arrival Time: 12:00 PM\n";
    correctString += "Origin: San Diego\n";
    correctString += "Destination: New York City\n";
    correctString += "Price: $" + std::to_string(flight.getPrice()) + "\n";
    ASSERT_EQ(flight.getItem(), correctString);
}

TEST(HotelTests, locationTest) {
    Hotel hotel("H1", "La Quinta", "New York City", 150.25, 4, 1300);
    EXPECT_EQ(hotel.getLocation(), "New York City");
}

TEST(HotelTests, priceTest) {
    Hotel hotel("H1", "La Quinta", "New York City", 150.25, 4, 1300);
    EXPECT_DOUBLE_EQ(hotel.getPrice(), 150.25);
}

TEST(HotelTests, ratingTest) {
    Hotel hotel("H1", "La Quinta", "New York City", 150.25, 4, 1300);
    ASSERT_EQ(hotel.getRating(), 4);
}

TEST(HotelTests, HotelItemTest) {
    Hotel hotel("H1", "La Quinta", "New York City", 150.25, 4, 1300);
    std::string correctString = "Hotel Name: La Quinta\n";
    correctString += "Location: New York City\n";
    correctString += "Price: $" + std::to_string(hotel.getPrice()) + "\n";
    correctString += "Rating: " + std::to_string(hotel.getRating()) + " stars\n";
    correctString += "Check-in Time: 01:00 PM\n";
    ASSERT_EQ(hotel.getItem(), correctString);  
}

TEST(ScheduleTests, formatTimeTest) {
    Trip* trip = new Trip("Hawaii Trip");
    Schedule schedule(trip);
    std::string correctString = "02:00 PM";
    ASSERT_EQ(schedule.formatTime(1400), correctString);
    delete trip;
    trip = nullptr;
}

TEST(TripTests, tripNameTest) {
    Trip trip("Hawaii Trip");
    EXPECT_EQ(trip.getTripName(), "Hawaii Trip");
}

TEST(TripTests, getTripItemsTest) {
    Trip trip("Hawaii Trip");
    TripHandler tripHandler(&trip);

    tripHandler.addTripItem(new Hotel("H1", "La Quinta", "New York City", 150.25, 4, 1300));
    EXPECT_EQ(trip.getTripItems()->size(), 1);
}

TEST(TripTests, removeByIndexTest) {
    Trip trip("Hawaii Trip");
    TripHandler tripHandler(&trip);

    tripHandler.addTripItem(new Hotel("H1", "La Quinta", "New York City", 150.25, 4, 1300));
    tripHandler.addTripItem(new Flight("F1", "Southwest", 800, 1200, 
    "San Diego", "New York City", 550.75));
    tripHandler.removeTripItemByIndex(0);
    EXPECT_EQ(trip.getTripItems()->size(), 1);
}

TEST(UserTests, usernameTest) {
    User user("khandrew", "password");
    ASSERT_EQ(user.getUsername(), "khandrew");
}

TEST(UserTests, passwordTest) {
    User user("khandrew", "password");
    ASSERT_EQ(user.getPassword(), "password");
}

TEST(UserTests, tripStorageTest) {
    Trip* trip = new Trip("Hawaii Trip");
    User user("khandrew", "password");
    user.addTripToStorage(trip);
    EXPECT_EQ(user.getTripStorage().size(), 1);
}



