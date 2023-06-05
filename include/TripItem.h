#ifndef TRIPITEM_H
#define TRIPITEM_H
#include <string>

enum ItemType {ACTIVITY, FLIGHT, HOTEL};

class TripItem{
  protected:
    std::string id;
    ItemType type;
  public:
    TripItem(std::string id, ItemType type) : id(id), type(type) {}
    ItemType getItemType() { return type; }
    std::string getID() { return id; }
    virtual std::string getItem() = 0;
};


#endif