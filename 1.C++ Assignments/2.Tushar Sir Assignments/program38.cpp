#include <iostream>

// Function to multiply two integers
int Multiply(int a, int b, int c = 1, int d = 1) {
    return a * b * c * d;
}

int main() {
    int result1 = Multiply(2, 3);             // Multiply two integers
    int result2 = Multiply(2, 3, 4);          // Multiply three integers
    int result3 = Multiply(2, 3, 4, 5);       // Multiply four integers

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;

    return 0;
}
