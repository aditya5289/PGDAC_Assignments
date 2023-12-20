#include <iostream>

int main() {
    int n;

    // Input: Number of subjects
    std::cout << "Enter the number of subjects: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid number of subjects. Please enter a positive integer." << std::endl;
        return 1; // Exit with an error code
    }

    // Dynamically allocate memory for 'n' subject marks
    int* marks = new int[n];

    // Input: Enter marks for each subject
    std::cout << "Enter marks for each subject:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Subject " << i + 1 << ": ";
        std::cin >> marks[i];
    }

    // Calculate the total marks
    int totalMarks = 0;
    for (int i = 0; i < n; i++) {
        totalMarks += marks[i];
    }

    // Calculate and display the average marks
    double averageMarks = static_cast<double>(totalMarks) / n;
    std::cout << "Average marks of all subjects: " << averageMarks << std::endl;

    // Free the dynamically allocated memory
    delete[] marks;

    return 0;
}
