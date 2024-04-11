// NOLINT(legal/copyright)
// NOLINT(build/namespaces)

#include "Menu.h"
#include <iostream>
#include <string>

// Using-declarations
using std::string;
using std::cout;
using std::endl;

void unit_test_exit() {
  // Unit test for user entering program, selecting option 4, and exiting
  // Menu *main_menu = new Menu("4");
  // delete main_menu;

  // Unit test for user entering program, adding a new birthday with no
  // additional info, and leaving Menu *main_menu = new
  // Menu("2;Yanelly;3;11;n;n;n;4"); delete main_menu;

  // Unit test for Issue #2: User can enter more than one word when prompted
  Menu *main_menu =
      new Menu("2;Jane Doe;4;7;n;y;birthday card,Target gift card,flowers;n;4");
  delete main_menu;
}

int main(int argc, char **argv) {
  // Check if the custom flag is passed (for unit test)
  bool customFlag = false;
  for (int i = 1; i < argc; i++) {
    if (string(argv[i]) == "-test") {
      customFlag = true;
      break;
    }
  }

  if (customFlag) {
    unit_test_exit();
  } else {
    cout << "Welcome to BirthdayNotes!" << endl;
    cout << "If you often forget your friends or family's birthdays, then this "
            "is the program for you\n"
         << endl;
    Menu *main_menu = new Menu();
    delete main_menu;
    return 0;
  }
}
