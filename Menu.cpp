// NOLINT(legal/copyright)

#include "Menu.h"

Menu::Menu(const string &defaultInput) : data(defaultInput) {
  int user_input;

  // for unit testing, parsing through string
  if (defaultInput != "") {
    istringstream iss(defaultInput);
    string token;

    while (getline(iss, token, ';')) {
      test_string.push_back(token);
    }
  }

  // Get's user input for menu options
  // Prompts user to select a number when number is out of scope and when
  // finishing the task from the opetion chosen Only stops prompting when user
  // selects option 4 (exiting the program)
  do {
    cout << "Main menu:" << endl;
    cout << "\t(1) View upcoming birthdays" << endl;
    cout << "\t(2) Add a birthday" << endl;
    cout << "\t(3) See full list of birthdays" << endl;
    cout << "\t(4) Exit program" << endl;
    cout << "Enter the option you'd like to select: " << endl;

    // if statement for unit testing
    if (defaultInput != "") {
      user_input = stoi(test_string.front());
      test_string.pop_front();
      cout << user_input << endl;
    } else {
      // else gets user input (non-unit testing)
      cin >> user_input;
    }

    switch (user_input) {
    case 1:
      cout << "Viewing upcoming birthdays for this month...\n" << endl;
      // Option1() is not set up
      break;
    case 2:
      Option2();
      break;
    case 3:
      cout << "Seeing a full list of birthdays entered...\n" << endl;
      // Option3() is not set up
      break;
    case 4:
      cout << "Exiting...\n" << endl;
      break;
    default:
      cout << "\nInvalid: Your option number was not in the menu" << endl;
    }
  } while (user_input != 4);
}

void Menu::Option2() {
  string name;
  int month;
  int day;
  char response;
  int year;
  string gifts;
  string party;

  // Prompts user for all the neccesary information
  cout << "\nAdding a birthday...\n" << endl;

  cout << "Enter the name of the person you'd like to add: ";
  // if statement for unit testing
  if (!test_string.empty()) {
    name = test_string.front();
    test_string.pop_front();
    cout << name << endl;
  } else {
    // else gets user input (non-unit testing)
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);
  }

  cout << "Enter the birthday month (as a number): ";
  // if statement for unit testing
  if (!test_string.empty()) {
    month = stoi(test_string.front());
    test_string.pop_front();
    cout << month << endl;

  } else {
    // else gets user input (non-unit testing)
    cin >> month;
  }

  cout << "Enter the birthday day: ";
  // if statement for unit testing
  if (!test_string.empty()) {
    day = stoi(test_string.front());
    test_string.pop_front();
    cout << day << endl;
  } else {
    // else gets user input (non-unit testing)
    cin >> day;
  }

  // Adds this information to an array that contains all of the people and their
  // birthdays
  all_birthdays.push_back(new Birthday(name, day, month));

  // Prompts for optional information
  cout << "\nThe following information is optional." << endl;
  cout << "Would you like to enter the birth year? (y/n): ";

  // if statement for unit testing
  if (!test_string.empty()) {
    response = (test_string.front()).at(0);
    test_string.pop_front();
    cout << response << endl;

  } else {
    // else gets user input (non-unit testing)
    cin >> response;
  }

  if (response == 'y') {
    cout << "Enter the birth year: ";

    // if statement for unit testing
    if (!test_string.empty()) {
      year = stoi(test_string.front());
      test_string.pop_front();
    } else {
      // else gets user input (non-unit testing)
      cin >> year;
    }
  }

  cout << "\nWould you like to enter your gift brainstorming ideas? (y/n): ";
  // if statement for unit testing
  if (!test_string.empty()) {
    response = (test_string.front()).at(0);
    test_string.pop_front();
    cout << response << endl;

  } else {
    // else gets user input (non-unit testing)
    cin >> response;
  }

  if (response == 'y') {
    cout << "Enter the gift brainstorming (seperated by commas): ";

    // if statement for unit testing
    if (!test_string.empty()) {
      gifts = test_string.front();
      test_string.pop_front();
    } else {
      // else gets user input (non-unit testing)
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      getline(cin, gifts);
    }
  }

  cout << "\nWould you like to enter any party ideas or information? (y/n): ";
  // if statement for unit testing
  if (!test_string.empty()) {
    response = (test_string.front()).at(0);
    test_string.pop_front();
    cout << response << endl;
  } else {
    // else gets user input (non-unit testing)
    cin >> response;
  }

  if (response == 'y') {
    cout << "Enter the party ideas or information (seperated by commas): ";

    // if statement for unit testing
    if (!test_string.empty()) {
      gifts = test_string.front();
      test_string.pop_front();
    } else {
      // else gets user input (non-unit testing)
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      getline(cin, party);
    }
  }
  cout << "\n" << endl;
}

/*EMPTY FUNCTIONS*/
void Menu::Option1() {}
void Menu::Option3() {}

Menu::~Menu() { all_birthdays.clear(); }
