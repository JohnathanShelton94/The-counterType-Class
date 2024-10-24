


// This is the header file for the counterType project


#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

class counterType {
private:
    int counter;

public:
            // Constructor to initialize the counter to 0
    counterType();

            // Constructor to initialize the counter to a user-specified value
    counterType(int value);

            // Function to set the counter
    void setCounter(int value);

            // Function to initialize (reset) the counter to 0
    void initializeCounter();

            // Function to increment the counter
    void increment();

            // Function to decrement the counter
    void decrement();

            // Function to retrieve the current value of the counter
    int getCounter() const;
};

#endif
