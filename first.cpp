#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error: Division by zero is not allowed.";
            } else {
                result = num1 / num2;
                std::cout << "Result: " << num1 << " / " << num2 << " = " << result;
            }
            break;
        default:
            std::cout << "Invalid operation selected";
    }

    return 0;
}
  