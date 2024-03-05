#include <iostream>
#include "Menu.h"
using namespace std;


int main(int argc, char **argv){
    cout << "Welcome to BirthdayNotes!" << endl;
    cout << "If you often forget your friends or family's birthdays, then this is the program for you\n" << endl;
    Menu *main_menu = new Menu();
    delete main_menu;
    return 0;
}