#include <iostream>

int main() {
    int arr[100], size, pos, value;

    // Input: Enter the size of the array
    std::cout << "Enter the size of the array (max 100): ";
    std::cin >> size;

    // Input: Enter the elements of the array
    std::cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Input: Enter the position of the element to insert (1 to size + 1)
    std::cout << "Enter the position to insert the element (1 to " << size + 1 << "): ";
    std::cin >> pos;

    if (pos >= 1 && pos <= size + 1) {
        // Input: Enter the value to insert
        std::cout << "Enter the value to insert: ";
        std::cin >> value;

        // Shift elements to the right to make space for the new element
        for (int i = size; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the value at the specified position
        arr[pos - 1] = value;

        size++; // Increase the size of the array

        // Display the updated array
        std::cout << "Array after insertion:" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Invalid position. Please enter a valid position (1 to " << size + 1 << ")." << std::endl;
    }

    return 0;
}
