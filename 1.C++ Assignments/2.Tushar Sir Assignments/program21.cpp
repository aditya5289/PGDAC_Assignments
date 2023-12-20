#include <iostream>
#include <cmath>

const double PI = 3.14159;

// Function to calculate the area and circumference of a circle
void areaCircum(double radius, double* area, double* circumference) {
    *area = PI * pow(radius, 2);
    *circumference = 2 * PI * radius;
}

// Function to calculate the area and perimeter of a rectangle
void areaPeri(double length, double width, double* area, double* perimeter) {
    *area = length * width;
    *perimeter = 2 * (length + width);
}

int main() {
    int choice;
    double radius, length, width, area, perimeter;

    while (true) {
        std::cout << "Menu:\n";
        std::cout << "1. Calculate area and circumference of a circle\n";
        std::cout << "2. Calculate area and perimeter of a rectangle\n";
        std::cout << "3. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                areaCircum(radius, &area, &perimeter);
                std::cout << "Area of the circle: " << area << std::endl;
                std::cout << "Circumference of the circle: " << perimeter << std::endl;
                break;
            case 2:
                std::cout << "Enter the length and width of the rectangle: ";
                std::cin >> length >> width;
                areaPeri(length, width, &area, &perimeter);
                std::cout << "Area of the rectangle: " << area << std::endl;
                std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;
                break;
            case 3:
                std::cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}
