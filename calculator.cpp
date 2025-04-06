// This file is part of the "Calculator App".
//
// Calculator App is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Calculator App is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Calculator App.  If not, see <https://www.gnu.org/licenses/>.


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
