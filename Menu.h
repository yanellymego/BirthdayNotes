// NOLINT(legal/copyright)
// NOLINT(build/namespaces)


#ifndef MENU_H_
#define MENU_H_

#include "Birthday.h"
#include <iostream>
#include <limits>
#include <list>
#include <sstream>
#include <string>

// Using-declarations 
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::istringstream;
using std::list;
using std::max;
using std::numeric_limits;
using std::streamsize;
using std::stringstream;

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