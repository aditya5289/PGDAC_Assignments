#include <iostream>
#include <stdexcept>

class Account {
private:
    double balance;

public:
    Account(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) {
        if (amount <= 0) {
            throw std::invalid_argument("Deposit amount should be greater than zero.");
        }
        balance += amount;
        std::cout << "Deposited Rs. " << amount << ". New balance: Rs. " << balance << std::endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            throw std::invalid_argument("Withdrawal amount should be greater than zero.");
        }

        if (amount > 15000) {
            throw std::overflow_error("Withdrawal limit exceeded. Maximum withdrawal limit is Rs. 15000.");
        }

        if (amount > balance) {
            throw std::underflow_error("Insufficient balance. Current balance is Rs. " + std::to_string(balance));
        }

        balance -= amount;
        std::cout << "Withdrawn Rs. " << amount << ". New balance: Rs. " << balance << std::endl;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    try {
        Account myAccount(50000);

        myAccount.deposit(10000);
        myAccount.withdraw(20000); // This should throw OverLimit exception
        myAccount.withdraw(30000); // This should throw InsufficientBalance exception
        myAccount.withdraw(1000);
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    }
    catch (const std::overflow_error& e) {
        std::cerr << "Overflow error: " << e.what() << std::endl;
    }
    catch (const std::underflow_error& e) {
        std::cerr << "Underflow error: " << e.what() << std::endl;
    }

    return 0;
}
