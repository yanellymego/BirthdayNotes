#include "Menu.h"

Menu::Menu(){
    int user_input;

    cout << "Main menu:" << endl;
    cout << "\t(1) View upcoming birthdays" << endl;
    cout << "\t(2) Add a birthday" << endl;
    cout << "\t(3) See full list of birthdays" << endl;
    cout << "\t(4) Exit program" << endl;
 
    //Get's user input for menu options
    //Prompts user to select a number when number is out of scope and when finishing the task from the opetion chosen
    //Only stops prompting when user selects option 4 (exiting the program)
    do{
        cout << "Enter the option you'd like to select: " << endl;
        cin >> user_input;

        switch(user_input)
        {
            case 1:
                cout << "Viewing upcoming birthdays for this month...\n" << endl;
                //Option1() is not set up 
                break;
            case 2:
                Option2();
                break;
            case 3:
                cout << "Seeing a full list of birthdays entered...\n" << endl;
                //Option3() is not set up 
                break;
            case 4:
                cout << "Exiting...\n" << endl;
                break;
            default:
                cout << "\nInvalid: Your option number was not in the menu" << endl;
            
        }
    }
    while (user_input != 4);
}

void Menu::Option2(){
    string name;
    int month;
    int day;
    char response;
    int year;

    //Prompts user for all the neccesary information
    cout << "\nAdding a birthday...\n" << endl;
    cout << "Enter the name of the person you'd like to add: ";
    cin >> name;
    cout << "Enter the birthday month (as a number): ";
    cin >> month;
    cout << "Enter the birthday day: ";
    cin >> day;

    //Adds this information to an array that contains all of the people and their birthdays
    all_birthdays.push_back(new Birthday(name, day, month));

    //Prompts for optional information
    cout << "\nThe following information is optional." << endl;
    cout << "Would you like to enter the birth year? (y/n): ";
    cin >> response;
    if (response == 'y'){
        //Error occurs 
        cout << "Enter the birth year: ";
        cin >> year;
    } 

    cout << "\nWould you like to enter your gift brainstorming ideas? (y/n): ";
    cin >> response;
    if (response == 'y'){
        //Error occurs 
        cout << "Enter the gift brainstorming (seperated by commas): ";
        cin >> year;
    } 

    cout << "\nWould you like to enter any party ideas or information? (y/n): ";
    cin >> response;
    if (response == 'y'){
        //Error occurs 
        cout << "Enter the party ideas or information (seperated by commas): ";
        cin >> year;
    } 
    cout << "\n" << endl;
}

/*EMPTY FUNCTIONS*/
void Menu::Option1(){}
void Menu::Option3(){}

Menu::~Menu(){
    all_birthdays.clear();
}