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

