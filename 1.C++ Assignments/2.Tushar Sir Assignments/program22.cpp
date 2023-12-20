#include <iostream>

void getDate(int* day, int* month, int* year) {
    std::cout << "Enter day: ";
    std::cin >> *day;

    std::cout << "Enter month: ";
    std::cin >> *month;

    std::cout << "Enter year (2-digit): ";
    std::cin >> *year;
}

int main() {
    int day, month, year;

    // Call the function to get the date
    getDate(&day, &month, &year);

    // Printing the date in "dd/mm/yy" format
    std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;

    return 0;
}
