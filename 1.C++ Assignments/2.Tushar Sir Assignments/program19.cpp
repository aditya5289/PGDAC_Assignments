#include <iostream>

void Fibonacci(int n) {
    int first = 0, second = 1;

    if (n >= 1) {
        std::cout << first << " ";
    }
    if (n >= 2) {
        std::cout << second << " ";
    }

    for (int i = 3; i <= n; i++) {
        int next = first + second;
        std::cout << next << " ";
        first = second;
        second = next;
    }

    std::cout << std::endl;
}

int main() {
    int n;

    std::cout << "Enter the number of terms in the Fibonacci series: ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Please enter a valid number of terms (1 or more)." << std::endl;
    } else {
        std::cout << "Fibonacci series for " << n << " terms: ";
        Fibonacci(n);
    }

    return 0;
}
