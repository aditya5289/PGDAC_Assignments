#include <iostream>

// Function to swap two integers using call by reference
void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Call the Swap function to swap num1 and num2
    Swap(num1, num2);

    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
