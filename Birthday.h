// NOLINT(legal/copyright)
// NOLINT(build/namespaces)

#ifndef BIRTHDAY_H_
#define BIRTHDAY_H_

#include <ctime>
#include <iostream>
#include <string>

// Using-declarations
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Birthday {
  public:
  Birthday();
  Birthday(string nickname, int day, int month);
  void printIndvBirthday();
  void setYear(int year);
  void setGiftBrainstorm(string note);
  void setPartyNotes(string note);

  ~Birthday();

  private:
  string name;
  string gift_brainstorm;
  string party_notes;

  int birth_day;
  int birth_month;
  int birth_year;
};

#endif  // BIRTHDAY_H_
