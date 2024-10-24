//This is the implementation file for the counterType project


#include "counterType.h"
#include <iostream>
using namespace std;

        // Constructor to initialize counter to 0
counterType::counterType() {
    counter = 0;
}

        // Constructor to initialize counter to user-specified value
counterType::counterType(bool askForValue) {
    if (askForValue) {
        int userValue;
        cout << "Enter a nonnegative value for the counter: ";
        cin >> userValue;

        // Ensure the value is nonnegative
        while (userValue < 0) {
            cout << "Value cannot be negative. Please enter a nonnegative value: ";
            cin >> userValue;
        }
        counter = userValue;
    }
}

        // Function to set the counter
void counterType::setCounter(int value) {
    if (value >= 0) {
        counter = value;
    }
    else {
        std::cout << "Error: Counter cannot be negative." << std::endl;
    }
}

        // Function to initialize counter to 0
void counterType::initializeCounter() {
    counter = 0;
}

        // Function to increment the counter
void counterType::increment() {
    counter++;
}

        // Function to decrement the counter
void counterType::decrement() {
    if (counter > 0) {
        counter--;
    }
    else {
        std::cout << "Counter cannot go below 0." << std::endl;
    }
}

        // Function to retrieve the current counter value
int counterType::getCounter() const {
    return counter;
}
