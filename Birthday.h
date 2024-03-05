#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Birthday{
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

#endif


