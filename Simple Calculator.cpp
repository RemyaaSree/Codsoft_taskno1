#include <iostream>
#include <cstdlib>

int main() {
    int opr;
    int num1, num2, x;

    do {
        std::cout << "Select an operation to perform a simple calculation in C++ done by Remyaa\n"
                     "1 = Addition\n"
                     "2 = Subtraction\n"
                     "3 = Multiplication\n"
                     "4 = Division\n"
                     "5 = Exit\n\n"
                     "Make a choice: ";
        std::cin >> opr;

        switch (opr) {
            case 1:
                std::cout << "You have selected the Addition Operation.\n"
                             "Please enter the two numbers:\n";
                std::cin >> num1 >> num2;
                x = num1 + num2;
                std::cout << "Sum of two numbers = " << x << std::endl;
                break;

            case 2:
                std::cout << "You have selected the Subtraction Operation.\n"
                             "Please enter the two numbers:\n";
                std::cin >> num1 >> num2;
                x = num1 - num2;
                std::cout << "Subtraction of two numbers = " << x << std::endl;
                break;

            case 3:
                std::cout << "You have selected the Multiplication Operation.\n"
                             "Please enter the two numbers:\n";
                std::cin >> num1 >> num2;
                x = num1 * num2;
                std::cout << "Product of two numbers = " << x << std::endl;
                break;

            case 4:
                std::cout << "You have selected the Division Operation.\n"
                             "Please enter the two numbers:\n";
                std::cin >> num1 >> num2;
                while (num2 == 0) {
                    std::cout << "Divisor cannot be zero. Please enter the divisor again: ";
                    std::cin >> num2;
                }
                x = num1 / num2;
                std::cout << "Quotient = " << x << std::endl;
                break;

            case 5:
                std::cout << "Exiting the program." << std::endl;
                break;

            default:
                std::cout << "Something went wrong..!!" << std::endl;
                break;
        }

        std::cout << "-----------------------------------------\n";
    } while (opr != 5);

    return 0;
}
