#include "gtest/gtest.h"
#include "../include/MainMenu.h"
#include "../include/AccountHandler.h"
#include "../include/Trip.h"
#include "../include/TripHandler.h"
#include "../include/Schedule.h"
#include "../include/DummyData.h"
#include "../include/TripItem.h"
#include "../include/Activity.h"

#include <string>

TEST(FlightTests, originTest) {
    Activity activity("F1", "kayaking", 800, 115.25);
    ASSERT_DOUBLE_EQ(activity.getPrice(), 115.25);
}

