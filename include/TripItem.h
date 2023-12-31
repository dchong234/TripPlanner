#ifndef TRIPITEM_H
#define TRIPITEM_H
#include <string>
#include <fstream>
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

    TripItem(const TripItem& other) : id(other.id), type(other.type), startTime(other.startTime), endTime(other.endTime), name(other.name) {}

    virtual ~TripItem() {}

    TripItem& operator=(const TripItem& other) {
      if (this == &other) {
        return *this;
      }

      this->id = other.id;
      this->type = other.type;
      this->startTime = other.startTime;
      this->endTime = other.endTime;
      this->name = name;

      return *this;
    }

    ItemType getItemType() { return type; }
    std::string getID() { return id; }
    int getStartTime() { return startTime; }
    int getEndTime() { return endTime; }
    std::string getName() { return name; }

    virtual std::string getItem() = 0;
    virtual void extractItem(std::ofstream& outFS) = 0;

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