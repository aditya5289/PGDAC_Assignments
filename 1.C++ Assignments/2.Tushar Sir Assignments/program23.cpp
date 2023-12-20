#include <iostream>

int* max(int* num1, int* num2) {
    if (*num1 > *num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    int* maxNumberPtr = max(&num1, &num2);

    std::cout << "The maximum number is: " << *maxNumberPtr << " at address: " << maxNumberPtr << std::endl;

    return 0;
}
