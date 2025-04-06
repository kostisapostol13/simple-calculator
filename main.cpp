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
