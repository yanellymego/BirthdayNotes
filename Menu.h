#ifndef MENU_H_
#define MENU_H_

#include "Birthday.h"
#include <iostream>
#include <limits>
#include <list>
#include <sstream>
#include <string>
using namespace std;

class Menu {
  public:
    explicit Menu(const string &defaultInput = "");
    ~Menu();
    void Option1();
    void Option2();
    void Option3();

  private:
    list<Birthday *> all_birthdays;
    list<string> test_string;  // for unit testing
    string data;
};

#endif  // MENU_H_