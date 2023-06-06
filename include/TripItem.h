#ifndef TRIPITEM_H
#define TRIPITEM_H
#include <string>
#include <ctime>
#include <iomanip>

enum ItemType {ACTIVITY, FLIGHT, HOTEL};

class TripItem {
  protected:
    std::string id;
    ItemType type;
    std::string name;
    int startTime;
    int endTime = 0;
  public:
    TripItem(std::string id, ItemType type, int startTime, int endTime, std::string name) : id(id), type(type), startTime(startTime), endTime(endTime), name(name) {}
    ItemType getItemType() { return type; }
    std::string getID() { return id; }

    int getStartTime() { return startTime; }
    int getEndTime() { return endTime; }
    std::string getName() { return name; }
    virtual std::string getItem() = 0;

    std::string formatTime(int time) const {
        int hours = time / 100;
        int minutes = time % 100;
        std::tm tm = {};
        tm.tm_hour = hours;
        tm.tm_min = minutes;
        std::ostringstream oss;
        oss << std::put_time(&tm, "%I:%M %p");
        return oss.str();
    }
};


#endif