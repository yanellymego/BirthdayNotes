#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <limits>
#include "Birthday.h"
using namespace std;

class Menu {
    public:
        Menu(const string defaultInput = "");
        ~Menu();
        void Option1();
        void Option2();
        void Option3();
    private:
        list<Birthday*> all_birthdays;
        list<string> test_string; // for unit testing
        string data;
};

#endif