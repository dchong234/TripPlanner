#ifndef TRIPITEM_H
#define TRIPITEM_H
#include <string>

enum ItemType {ACTIVITY, FLIGHT, HOTEL};

class TripItem{
  protected:
    ItemType type;
  public:
    TripItem(ItemType type) : type(type) {}
    ItemType getItemType() { return type; }
    virtual std::string getItem() = 0;
};


#endif