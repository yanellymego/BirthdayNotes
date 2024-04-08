#include "Birthday.h"

// Creating a person after receiving user input
Birthday::Birthday(string nickname, int day, int month) {
  name = nickname;
  birth_day = day;
  birth_month = month;

  // Optional, defaults as null
  birth_year = NULL;
  gift_brainstorm = "";
  party_notes = "";
}

// Does not print out the optional information
void Birthday::printIndvBirthday() {
  cout << "Name: " << name << endl;
  cout << "Birthday: " << birth_month << "-" << birth_day << endl;
}

/*Setters for optional information*/
void Birthday::setYear(int year) { birth_year = year; }

void Birthday::setGiftBrainstorm(string note) { gift_brainstorm = note; }

void Birthday::setPartyNotes(string note) { party_notes = note; }

Birthday::~Birthday() {}