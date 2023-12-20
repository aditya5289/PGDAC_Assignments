#include <iostream>
#include <stdexcept>

template <typename T>
class Stack {
private:
    int size;
    int top;
    T* stackArray;

public:
    Stack(int stackSize)
        : size(stackSize), top(-1) {
        stackArray = new T[size];
    }

    ~Stack() {
        delete[] stackArray;
    }

    void push(const T& value) {
        if (isFull()) {
            throw std::overflow_error("Stack is full. Cannot push.");
        }
        stackArray[++top] = value;
    }

    void pop() {
        if (isEmpty()) {
            throw std::underflow_error("Stack is empty. Cannot pop.");
        }
        --top;
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == size - 1;
    }

    void display() const {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
            return;
        }
        std::cout << "Stack Contents:" << std::endl;
        for (int i = 0; i <= top; ++i) {
            std::cout << stackArray[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    try {
        // Test with integers
        Stack<int> intStack(2);
        intStack.push(10);
        intStack.push(20);
        intStack.push(30); // This should throw an overflow exception
    }
    catch (const std::overflow_error& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        // Test with doubles
        Stack<double> doubleStack(2);
        doubleStack.pop(); // This should throw an underflow exception
    }
    catch (const std::underflow_error& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
