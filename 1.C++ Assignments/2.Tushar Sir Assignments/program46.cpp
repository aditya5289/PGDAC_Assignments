#include <iostream>
#include <cstring>
#include <ctime>

// User-defined Date class
class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    void display() {
        std::cout << day << "/" << month << "/" << year;
    }
};

class Student {
private:
    static int nextRollNumber; // Static variable to generate roll numbers
    int rollNumber;
    char name[100];
    Date birthDate;

public:
    // Default constructor
    Student() : rollNumber(++nextRollNumber) {
        strcpy(name, "");
    }

    // Parameterized constructor
    Student(const char* n, const Date& dob) : rollNumber(++nextRollNumber), birthDate(dob) {
        strcpy(name, n);
    }

    // Function to accept student details
    void accept() {
        std::cout << "Enter student name: ";
        std::cin.getline(name, sizeof(name));

        int day, month, year;
        std::cout << "Enter date of birth (dd mm yyyy): ";
        std::cin >> day >> month >> year;
        birthDate = Date(day, month, year);
    }

    // Function to display student details
    void display() {
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Date of Birth: ";
        birthDate.display();
        std::cout << std::endl;
    }
};

int Student::nextRollNumber = 0; // Initialize static variable

int main() {
    Student student1;
    Student student2("John Doe", Date(10, 5, 2000));

    student1.accept(); // Input student1 details
    std::cout << std::endl;

    std::cout << "Student 1 Details:" << std::endl;
    student1.display();

    std::cout << "Student 2 Details:" << std::endl;
    student2.display();

    return 0;
}
