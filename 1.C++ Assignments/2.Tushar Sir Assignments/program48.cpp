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

    // Pure virtual functions to make Employee class abstract
    virtual void displayDetails() = 0;
    virtual void accept() = 0;

    // Virtual destructor to ensure proper cleanup in derived classes
    virtual ~Employee() {}
};

class WageEmployee : public Employee {
private:
    double hoursWorked;
    double ratePerHour;

public:
    WageEmployee(int id, const char* n, const char* d, double hours, double rate)
        : Employee(id, n, d), hoursWorked(hours), ratePerHour(rate) {}

    // Implement the displayDetails function
    void displayDetails() override {
        std::cout << "Wage Employee Details:" << std::endl;
        std::cout << "Employee ID: " << employeeId << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Date of Birth: " << dob << std::endl;
        std::cout << "Hours Worked: " << hoursWorked << std::endl;
        std::cout << "Rate per Hour: $" << ratePerHour << std::endl;
    }

    // Implement the accept function
    void accept() override {
        std::cout << "Enter employee details:" << std::endl;
        std::cout << "Employee ID: ";
        std::cin >> employeeId;
        std::cin.ignore(); // Clear the newline character from the buffer
        std::cout << "Name: ";
        std::cin.getline(name, sizeof(name));
        std::cout << "Date of Birth (dd/mm/yyyy): ";
        std::cin >> dob;
        std::cout << "Hours Worked: ";
        std::cin >> hoursWorked;
        std::cout << "Rate per Hour: $";
        std::cin >> ratePerHour;
    }
};

class SalesPerson : public Employee {
private:
    double itemsSold;
    double commissionPerItem;

public:
    SalesPerson(int id, const char* n, const char* d, double items, double commission)
        : Employee(id, n, d), itemsSold(items), commissionPerItem(commission) {}

    // Implement the displayDetails function
    void displayDetails() override {
        std::cout << "Sales Person Details:" << std::endl;
        std::cout << "Employee ID: " << employeeId << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Date of Birth: " << dob << std::endl;
        std::cout << "Items Sold: " << itemsSold << std::endl;
        std::cout << "Commission per Item: $" << commissionPerItem << std::endl;
    }

    // Implement the accept function
    void accept() override {
        std::cout << "Enter employee details:" << std::endl;
        std::cout << "Employee ID: ";
        std::cin >> employeeId;
        std::cin.ignore(); // Clear the newline character from the buffer
        std::cout << "Name: ";
        std::cin.getline(name, sizeof(name));
        std::cout << "Date of Birth (dd/mm/yyyy): ";
        std::cin >> dob;
        std::cout << "Items Sold: ";
        std::cin >> itemsSold;
        std::cout << "Commission per Item: $";
        std::cin >> commissionPerItem;
    }
};

int main() {
    // Create Employee pointers
    Employee* emp1 = new WageEmployee(101, "John Doe", "01/01/1990", 40, 15.0);
    Employee* emp2 = new SalesPerson(102, "Jane Smith", "15/05/1985", 100, 5.0);

    // Accept and display details using the pointers
    emp1->accept();
    emp1->displayDetails();
    std::cout << std::endl;

    emp2->accept();
    emp2->displayDetails();
    std::cout << std::endl;

    // Free memory for dynamically created objects
    delete emp1;
    delete emp2;

    return 0;
}
