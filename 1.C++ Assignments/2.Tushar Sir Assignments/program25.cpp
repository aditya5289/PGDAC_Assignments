#include <iostream>

int main() {
    int arr[100], size, pos;

    // Input: Enter the size of the array
    std::cout << "Enter the size of the array (max 100): ";
    std::cin >> size;

    // Input: Enter the elements of the array
    std::cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Input: Enter the position of the element to be deleted
    std::cout << "Enter the position of the element to delete (1 to " << size << "): ";
    std::cin >> pos;

    if (pos >= 1 && pos <= size) {
        // Delete the element at the specified position
        for (int i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--; // Reduce the size of the array

        // Display the updated array
        std::cout << "Array after deletion:" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Invalid position. Please enter a valid position (1 to " << size << ")." << std::endl;
    }

    return 0;
}
