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
        if (top == size - 1) {
            std::cerr << "Stack is full. Cannot push." << std::endl;
            return;
        }
        stackArray[++top] = value;
    }

    void pop() {
        if (isEmpty()) {
            std::cerr << "Stack is empty. Cannot pop." << std::endl;
            return;
        }
        --top;
    }

    bool isEmpty() const {
        return top == -1;
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
    // Test with integers
    Stack<int> intStack(5);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display();
    intStack.pop();
    intStack.display();

    // Test with doubles
    Stack<double> doubleStack(4);
    doubleStack.push(3.14);
    doubleStack.push(2.718);
    doubleStack.display();

    // Test with complex objects (strings)
    Stack<std::string> stringStack(3);
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.display();

    return 0;
}
