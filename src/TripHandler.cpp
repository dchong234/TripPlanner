#include "../include/TripHandler.h"
#include <vector>

TripHandler::TripHandler(Trip& trip) : trip(trip) {}

void TripHandler::addActivity(Activity& activity) {
    std::vector<Activity> activitiesVector = trip.getActivities();
    activitiesVector.push_back(activity);
}

void TripHandler::removeActivity(Activity& activity) {
    std::vector<Activity>::iterator it = getActivityPosition(activity);

    trip.getActivities().erase(it);
}

void TripHandler::addHotel(Hotel& hotel) {
    std::vector<Hotel> hotelVector = trip.getHotels();
    hotelVector.push_back(hotel);
}

void TripHandler::removeHotel(Hotel& hotel) {
    std::vector<Hotel>::iterator it = getHotelPosition(hotel);

    trip.getHotels().erase(it);
}

void TripHandler::addFlights(Flight& flight) {
    std::vector<Flight> flightVector = trip.getFlights();
    flightVector.push_back(flight);
}

void TripHandler::removeFlight(Flight& flight) {
    std::vector<Flight>::iterator it = getFlightPosition(flight);

    trip.getFlights().erase(it);
}

std::vector<Activity>::iterator TripHandler::getActivityPosition(Activity& activity) {
    std::vector<Activity> activitiesVector = trip.getActivities();

    for (auto it = activitiesVector.begin(); it != activitiesVector.end(); ++it) {
        if (it->getName() == activity.getName()) {
            return it;
        }
    }
}

std::vector<Hotel>::iterator TripHandler::getHotelPosition(Hotel& hotel) {
    std::vector<Hotel> hotelVector = trip.getHotels();

    for (auto it = hotelVector.begin(); it != hotelVector.end(); ++it) {
        if (it->getName() == hotel.getName()) {
            return it;
        }
    }
}

std::vector<Flight>::iterator TripHandler::getFlightPosition(Flight& flight) {
    std::vector<Flight> flightsVector = trip.getFlights();

    for (auto it = flightsVector.begin(); it != flightsVector.end(); ++it) {
        if (it->getName() == flight.getName()) {
            return it;
        }
    }
}