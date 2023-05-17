#ifndef USER_H
#define USER_H

#include "Schedule.h"
#include <string>

class User {
    private:
        string name;
        string username;
        string password;
    public:
        string getName();
        string getUsername();

};

#endif