#include <iostream>
#include <cstring>

class Employee {
protected:
    int employeeId;
    char name[100];
    char dob[11]; // Date of birth in "dd/mm/yyyy" format

public:
    Employee(int id, const char* n, const char* d) : employeeId(id) {
        strcpy(name, n);
        strcpy(dob, d);
    }

    // Function to display employee details
    virtual void displayDetails() {
        std::cout << "Employee ID: " << employeeId << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Date of Birth: " << dob << std::endl;
    }

    // Virtual function to calculate salary (to be overridden by derived classes)
    virtual double calculateSalary() {
        return 0.0; // Base class has no salary calculation
    }
};

class WageEmployee : public Employee {
private:
    double hoursWorked;
    double ratePerHour;

public:
    WageEmployee(int id, const char* n, const char* d, double hours, double rate)
        : Employee(id, n, d), hoursWorked(hours), ratePerHour(rate) {}

    // Override the displayDetails function
    void displayDetails() override {
        Employee::displayDetails();
        std::cout << "Hours Worked: " << hoursWorked << std::endl;
        std::cout << "Rate per Hour: $" << ratePerHour << std::endl;
    }

    // Override the calculateSalary function
    double calculateSalary() override {
        return hoursWorked * ratePerHour;
    }
};

class SalesPerson : public Employee {
private:
    double itemsSold;
    double commissionPerItem;

public:
    SalesPerson(int id, const char* n, const char* d, double items, double commission)
        : Employee(id, n, d), itemsSold(items), commissionPerItem(commission) {}

    // Override the displayDetails function
    void displayDetails() override {
        Employee::displayDetails();
        std::cout << "Items Sold: " << itemsSold << std::endl;
        std::cout << "Commission per Item: $" << commissionPerItem << std::endl;
    }

    // Override the calculateSalary function
    double calculateSalary() override {
        return (itemsSold * commissionPerItem) + Employee::calculateSalary();
    }
};

int main() {
    // Create WageEmployee object
    WageEmployee wageEmp(101, "John Doe", "01/01/1990", 40, 15.0);

    // Create SalesPerson object
    SalesPerson salesPerson(102, "Jane Smith", "15/05/1985", 100, 5.0);

    // Display details and calculate salary for WageEmployee
    std::cout << "Wage Employee Details:" << std::endl;
    wageEmp.displayDetails();
    std::cout << "Salary: $" << wageEmp.calculateSalary() << std::endl << std::endl;

    // Display details and calculate salary for SalesPerson
    std::cout << "Sales Person Details:" << std::endl;
    salesPerson.displayDetails();
    std::cout << "Salary: $" << salesPerson.calculateSalary() << std::endl;

    return 0;
}
