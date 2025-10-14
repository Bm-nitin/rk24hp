// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cin>> x

// }

#include <iostream>
#include <iomanip> // For output formatting

/**
 * @brief Simple console calculator program.
 * * This program prompts the user to enter two numbers and an arithmetic
 * operator (+, -, *, /) and then calculates and displays the result.
 */
int main() {
    // Declare variables to store the two numbers and the operator
    double num1, num2;
    char operation;

    // Display a welcome message and instructions
    std::cout << "--- Simple C++ Console Calculator ---" << std::endl;
    std::cout << "Supported operations: +, -, *, /" << std::endl;
    std::cout << "Enter operation in the format: [Number 1] [Operator] [Number 2]" << std::endl;
    std::cout << "Example: 5.5 * 3" << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    // Prompt user for input (e.g., 10 + 5)
    std::cout << "Input: ";
    
    // Read the input in the specified order: number1, operator, number2
    if (!(std::cin >> num1 >> operation >> num2)) {
        std::cerr << "Error: Invalid input format. Please ensure you enter two numbers and one operator." << std::endl;
        return 1; // Exit with error code
    }

    double result = 0.0;
    bool valid_operation = true;

    // Use a switch statement to perform the calculation based on the operator
    switch (operation) {
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
            // Check for division by zero before performing the operation
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cerr << "Error: Division by zero is not allowed." << std::endl;
                valid_operation = false;
            }
            break;
        default:
            std::cerr << "Error: Invalid operator '" << operation << "'. Only +, -, *, / are supported." << std::endl;
            valid_operation = false;
            break;
    }

    // Only display the result if the operation was valid (i.e., not division by zero or invalid operator)
    if (valid_operation) {
        // Use std::fixed and std::setprecision for clean output of floating-point numbers
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nResult: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;
    }

    return 0; // Exit successfully
}
