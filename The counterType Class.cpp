//This is the main file for the counterType project


#include "counterType.h"
#include <iostream>

int main() {
            // Test with default constructor
    counterType counter1;
    std::cout << "Initial value (default constructor): " << counter1.getCounter() << std::endl;

            // Test with user-specified constructor
    counterType counter2(5);
    std::cout << "Initial value (user-specified constructor): " << counter2.getCounter() << std::endl;

            // Test increment
    counter2.increment();
    std::cout << "After increment: " << counter2.getCounter() << std::endl;

            // Test decrement
    counter2.decrement();
    std::cout << "After decrement: " << counter2.getCounter() << std::endl;

            // Test reset
    counter2.initializeCounter();
    std::cout << "After reset: " << counter2.getCounter() << std::endl;

            // Test decrement after reset
    counter2.decrement();
    std::cout << "Attempting to decrement after reset: " << counter2.getCounter() << std::endl;

            // Set counter to 10
    counter2.setCounter(10);
    std::cout << "After setting to 10: " << counter2.getCounter() << std::endl;

    return 0;
}
