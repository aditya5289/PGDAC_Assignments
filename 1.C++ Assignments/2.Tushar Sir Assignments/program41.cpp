#include <iostream>

class Array {
private:
    int size;
    int* arr;

public:
    // Default constructor
    Array() : size(5), arr(new int[5]) {
        for (int i = 0; i < size; ++i) {
            arr[i] = 0;
        }
    }

    // Parameterized constructor
    Array(int newSize) : size(newSize), arr(new int[newSize]) {
        for (int i = 0; i < size; ++i) {
            arr[i] = 0;
        }
    }

    // Copy constructor (deep copy)
    Array(const Array& other) : size(other.size), arr(new int[other.size]) {
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }

    // Getter for size
    int getSize() const {
        return size;
    }

    // Function to set the value of an element at a given index
    void set(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        } else {
            std::cerr << "Index out of bounds." << std::endl;
        }
    }

    // Function to get the value of an element at a given index
    int get(int index) const {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cerr << "Index out of bounds." << std::endl;
            return -1; // Return a default value (you can change this as needed)
        }
    }
};

int main() {
    // Example usage
    Array arr1; // Default constructor
    Array arr2(10); // Parameterized constructor
    Array arr3 = arr1; // Copy constructor

    arr1.set(0, 42);
    std::cout << "arr1[0] = " << arr1.get(0) << std::endl;
    std::cout << "arr2[0] = " << arr2.get(0) << std::endl;
    std::cout << "arr3[0] = " << arr3.get(0) << std::endl;

    return 0;
}
