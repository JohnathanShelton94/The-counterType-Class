//This is the main file for the counterType project


#include "counterType.h"
#include <iostream>
using namespace std;

int main() {
            // Test with default constructor
    counterType counter1;
    cout << "Initial value (default constructor): " << counter1.getCounter() << endl;

            // Test the user-defined constructor with input from the user
    counterType counter2(true);  // Pass `true` to ask the user for input
    cout << "Value after user input: " << counter2.getCounter() << endl;

            // Test increment and decrement
    counter2.increment();
    cout << "After increment: " << counter2.getCounter() << endl;

    counter2.decrement();
    cout << "After decrement: " << counter2.getCounter() << endl;

            // Test reset
    counter2.initializeCounter();
    cout << "After reset: " << counter2.getCounter() << std::endl;

            // Test decrement after reset
    counter2.decrement();
    cout << "Attempting to decrement after reset: " << counter2.getCounter() << std::endl;

            // Set counter to 10
    counter2.setCounter(10);
    cout << "After setting to 10: " << counter2.getCounter() << std::endl;

    return 0;
}
