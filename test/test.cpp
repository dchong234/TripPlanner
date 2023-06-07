#include "../include/MainMenu.h"
#include "../include/AccountHandler.h"
#include "../include/Trip.h"
#include "../include/TripHandler.h"
#include "../include/Schedule.h"
#include "../include/DummyData.h"
#include "../include/TripItem.h"
#include "../include/Flight.h"
#include <gtest/gtest.h>

TEST(FlightTests, nameOfAirline) {
    Flight flight("id", "Southwest", 800, 1200, "San Jose", "Tokyo", 115.25);
    ASSERT_EQ(flight.getOrigin(), "San Jose");
}

