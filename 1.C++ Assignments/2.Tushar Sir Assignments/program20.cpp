#include <iostream>
#include <cmath>

const double PI = 3.142;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

double calculateSine(double x) {
    double sine = 0;
    for (int i = 0; i < 5; i++) {
        int term = 2 * i + 1;
        double sign = (i % 2 == 0) ? 1.0 : -1.0;
        sine += sign * power(x, term) / factorial(term);
    }
    return sine;
}

int main() {
    double degrees;
    std::cout << "Enter an angle in degrees: ";
    std::cin >> degrees;

    // Convert degrees to radians
    double radians = degrees * (PI / 180.0);

    // Calculate sine using the series
    double sineValue = calculateSine(radians);

    std::cout << "Sine(" << degrees << " degrees) = " << sineValue << std::endl;

    return 0;
}
