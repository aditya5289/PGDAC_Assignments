#include <iostream>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        // Print numbers in increasing order
        for (int j = 1; j <= n - i; j++) {
            std::cout << j << " ";
        }

        // Print spaces
        for (int k = 1; k <= 2 * i; k++) {
            std::cout << "  ";
        }

        // Print numbers in decreasing order (skip the last one)
        for (int l = n - i; l >= 1; l--) {
            if (l != 0) {
                std::cout << l << " ";
            }
        }

        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}
