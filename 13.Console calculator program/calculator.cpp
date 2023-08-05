#include <iostream>


using namespace std;


int main(){

    char op;
    double num1, num2, result;

    // Ask the user to enter the operator and two numbers
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform the calculation based on the operator
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
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