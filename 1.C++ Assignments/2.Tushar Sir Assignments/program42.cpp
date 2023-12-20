#include <iostream>
#include <cstring>

class Employee {
private:
    int emp_id;
    char emp_name[20];
    double salary;

public:
    Employee() : emp_id(0), salary(0.0) {
        std::strcpy(emp_name, "");
    }

    Employee(int id, const char* name, double sal) : emp_id(id), salary(sal) {
        std::strcpy(emp_name, name);
    }

    void Accept() {
        std::cout << "Enter Employee ID: ";
        std::cin >> emp_id;
        std::cout << "Enter Employee Name: ";
        std::cin.ignore();
        std::cin.getline(emp_name, sizeof(emp_name));
        std::cout << "Enter Salary: ";
        std::cin >> salary;
    }

    void Display() {
        std::cout << "Employee ID: " << emp_id << std::endl;
        std::cout << "Employee Name: " << emp_name << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }

    int GetEmpID() const {
        return emp_id;
    }

    void Update(double newSalary) {
        salary = newSalary;
    }
};

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int numEmployees = 0;

    while (true) {
        std::cout << "Menu:\n";
        std::cout << "1. Insert a record\n";
        std::cout << "2. Update information\n";
        std::cout << "3. Display all records\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                if (numEmployees < MAX_EMPLOYEES) {
                    Employee newEmployee;
                    newEmployee.Accept();
                    employees[numEmployees] = newEmployee;
                    numEmployees++;
                    std::cout << "Record added successfully.\n";
                } else {
                    std::cout << "Maximum number of employees reached.\n";
                }
                break;
            }

            case 2: {
                int empID;
                std::cout << "Enter Employee ID to update: ";
                std::cin >> empID;

                bool found = false;
                for (int i = 0; i < numEmployees; ++i) {
                    if (employees[i].GetEmpID() == empID) {
                        double newSalary;
                        std::cout << "Enter new Salary: ";
                        std::cin >> newSalary;
                        employees[i].Update(newSalary);
                        found = true;
                        std::cout << "Information updated successfully.\n";
                        break;
                    }
                }

                if (!found) {
                    std::cout << "Employee ID not found.\n";
                }
                break;
            }

            case 3: {
                std::cout << "Employee Records:\n";
                for (int i = 0; i < numEmployees; ++i) {
                    employees[i].Display();
                    std::cout << std::endl;
                }
                break;
            }

            case 4:
                return 0;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
