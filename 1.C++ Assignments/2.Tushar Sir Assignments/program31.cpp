#include <iostream>
#include <cstring>

const int MAX_STRING_LENGTH = 100;
const int NUM_STRINGS = 5;

// Function to perform string comparison for sorting
int CompareStrings(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
    char* strings[NUM_STRINGS];

    // Input: Enter five strings
    std::cout << "Enter " << NUM_STRINGS << " strings:" << std::endl;
    for (int i = 0; i < NUM_STRINGS; i++) {
        strings[i] = new char[MAX_STRING_LENGTH];
        std::cin.getline(strings[i], MAX_STRING_LENGTH);
    }

    // Sort the strings in alphabetical order
    qsort(strings, NUM_STRINGS, sizeof(char*), CompareStrings);

    // Display the sorted strings
    std::cout << "Sorted strings in alphabetical order:" << std::endl;
    for (int i = 0; i < NUM_STRINGS; i++) {
        std::cout << strings[i] << std::endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < NUM_STRINGS; i++) {
        delete[] strings[i];
    }

    return 0;
}
