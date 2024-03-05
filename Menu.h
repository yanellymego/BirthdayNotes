#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <list>
#include "Birthday.h"
using namespace std;

class Menu {
    public:
        Menu();
        ~Menu();
        void Option1();
        void Option2();
        void Option3();
    private:
        list<Birthday*> all_birthdays;
};

#endif