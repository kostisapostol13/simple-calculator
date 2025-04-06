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


#include <iostream>
#include "calculator.h"

int main() {
    double num1, num2, result;
    char operation;

    // Prompt user for input
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform the operation based on user input
    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            if (std::isnan(result)) {
                std::cout << "Error: Division by zero is undefined." << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
            return 1;
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;
    return 0;
}
