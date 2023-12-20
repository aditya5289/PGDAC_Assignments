#include <iostream>

// Function to add two integers
int Add(int a, int b) {
    return a + b;
}

// Function to add two floats
float Add(float a, float b) {
    return a + b;
}

// Function to add two doubles
double Add(double a, double b) {
    return a + b;
}

int main() {
    int intResult = Add(5, 3);
    float floatResult = Add(2.5f, 1.2f);
    double doubleResult = Add(3.7, 2.1);

    std::cout << "Integer Result: " << intResult << std::endl;
    std::cout << "Float Result: " << floatResult << std::endl;
    std::cout << "Double Result: " << doubleResult << std::endl;

    return 0;
}
