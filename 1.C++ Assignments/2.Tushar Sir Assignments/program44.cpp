#include <iostream>

class Array {
private:
    int* arr;    // Pointer to store the array elements
    int size;    // Size of the array

public:
    // Constructor to initialize size and create an array
    Array(int s = 0) : size(s) {
        arr = new int[size];
    }

    // Destructor to release memory
    ~Array() {
        delete[] arr;
    }

    // Overload [] operator to get/set array element
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return arr[index];
    }

    // Overload ! operator to reverse array elements
    void operator!() {
        int start = 0;
        int end = size - 1;
        while (start < end) {
            // Swap elements at start and end
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    // Overload >> operator to accept array size and elements from user
    friend std::istream& operator>>(std::istream& in, Array& array) {
        std::cout << "Enter the size of the array: ";
        in >> array.size;
        
        // Allocate memory for the array
        delete[] array.arr;
        array.arr = new int[array.size];

        std::cout << "Enter " << array.size << " elements: ";
        for (int i = 0; i < array.size; i++) {
            in >> array.arr[i];
        }
        return in;
    }

    // Overload << operator to display array
    friend std::ostream& operator<<(std::ostream& out, const Array& array) {
        out << "Array Elements: ";
        for (int i = 0; i < array.size; i++) {
            out << array.arr[i] << " ";
        }
        out << std::endl;
        return out;
    }
};

int main() {
    Array arr;
    std::cin >> arr; // Input array size and elements from the user
    std::cout << "Original Array:" << std::endl;
    std::cout << arr;

    arr[2] = 42; // Set an element at index 2
    std::cout << "Modified Array:" << std::endl;
    std::cout << arr;

    !arr; // Reverse the array
    std::cout << "Reversed Array:" << std::endl;
    std::cout << arr;

    return 0;
}
