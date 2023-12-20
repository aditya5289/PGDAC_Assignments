#include <iostream>
#include <string>

class Employee {
public:
    Employee(int id, std::string name, std::string dob)
        : employeeId(id), employeeName(name), dateOfBirth(dob) {}

    void displayDetails() {
        std::cout << "Employee ID: " << employeeId << std::endl;
        std::cout << "Employee Name: " << employeeName << std::endl;
        std::cout << "Date of Birth: " << dateOfBirth << std::endl;
    }

    virtual double calculateSalary() {
        return 0; // Default implementation for base class
    }

private:
    int employeeId;
    std::string employeeName;
    std::string dateOfBirth;
};

class WageEmployee : virtual public Employee {
public:
    WageEmployee(int id, std::string name, std::string dob, double hours, double rate)
        : Employee(id, name, dob), hoursWorked(hours), ratePerHour(rate) {}

    void displayDetails() {
        Employee::displayDetails();
        std::cout << "Hours Worked: " << hoursWorked << std::endl;
        std::cout << "Rate per Hour: $" << ratePerHour << std::endl;
    }

    double calculateSalary() override {
        return hoursWorked * ratePerHour;
    }

private:
    double hoursWorked;
    double ratePerHour;
};

class SalesPerson : virtual public Employee {
public:
    SalesPerson(int id, std::string name, std::string dob, int itemsSold, double commission)
        : Employee(id, name, dob), itemsSold(itemsSold), commissionPerItem(commission) {}

    void displayDetails() {
        Employee::displayDetails();
        std::cout << "Items Sold: " << itemsSold << std::endl;
        std::cout << "Commission per Item: $" << commissionPerItem << std::endl;
    }

    double calculateSalary() override {
        return itemsSold * commissionPerItem;
    }

private:
    int itemsSold;
    double commissionPerItem;
};

class Manager : virtual public Employee {
protected:
    Manager(int id, std::string name, std::string dob, int basicSalary, int numSubordinates)
        : Employee(id, name, dob), basicSalary(basicSalary), numSubordinates(numSubordinates) {}

    void displayDetails() {
        Employee::displayDetails();
        std::cout << "Basic Salary: $" << basicSalary << std::endl;
        std::cout << "Number of Subordinates: " << numSubordinates << std::endl;
    }

    double calculateSalary() override {
        return basicSalary;
    }

private:
    int basicSalary;
    int numSubordinates;
};

class SalesManager : public SalesPerson, public Manager {
public:
    SalesManager(int id, std::string name, std::string dob, int itemsSold, double commission, int basicSalary, int numSubordinates)
        : Employee(id, name, dob), SalesPerson(id, name, dob, itemsSold, commission), Manager(id, name, dob, basicSalary, numSubordinates) {}

    void displayDetails() {
        std::cout << "Sales Manager Details:" << std::endl;
        Employee::displayDetails();
        Manager::displayDetails(); // Call Manager's displayDetails
        std::cout << "Total Salary: $" << calculateSalary() << std::endl;
    }

    double calculateSalary() override {
        return Manager::calculateSalary() + SalesPerson::calculateSalary();
    }
};

int main() {
    SalesManager salesMgr(103, "Michael Johnson", "1980-09-10", 200, 7.5, 50000, 5);

    std::cout << "Sales Manager Details:" << std::endl;
    salesMgr.displayDetails();

    return 0;
}
