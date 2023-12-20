#include <iostream>

int main() {
    int n;

    // Input the number of subjects
    std::cout << "Enter the number of subjects: ";
    std::cin >> n;

    // Dynamically allocate memory for the marks array
    int* marks = new int[n];

    // Input marks for each subject
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter marks for subject " << i + 1 << ": ";
        std::cin >> marks[i];
    }

    // Calculate the sum of marks
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += marks[i];
    }

    // Calculate the average
    double average = static_cast<double>(sum) / n;

    // Display the average marks
    std::cout << "Average marks: " << average << std::endl;

    // Deallocate the dynamically allocated memory
    delete[] marks;

    return 0;
}
