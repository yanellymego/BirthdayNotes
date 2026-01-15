# BirthdayNotes
This program is a C++ console-based application that allows users to store and manage birthdays for family and friends, along with optional notes. Users can view all stored birthdays organized by month or focus on upcoming birthdays.

This project was intentionally designed with incomplete sections and open issues to help users practice GitHub workflows such as forking repositories, creating pull requests, and contributing new features.

## Features
When running the program, users can:

- Add birthdays with associated notes
- View all stored birthdays separated by month
- View upcoming birthdays
- Run unit tests using a test flag

## How to Compile and Run
g++ *.cpp -o BirthdayNotes

./BirthdayNotes

## For Unit Testing
Add unit test in unit_test_exit() in main.cpp

When running, add -test flag:
g++ *.cpp -o BirthdayNotes  

./BirthdayNotes -test
