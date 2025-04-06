#include "calculator.h"

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
// Returns NaN if division by zero is attempted
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        return std::nan(""); // Return NaN to indicate an error
    }
}
