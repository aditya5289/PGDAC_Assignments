#include <iostream>

class Complex {
private:
    int real;
    int imaginary;
    static int count; // Static data member to count objects

public:
    // Default constructor
    Complex() {
        real = 0;
        imaginary = 0;
        count++; // Increment object count when an object is created
    }

    // Parameterized constructor
    Complex(int realPart, int imaginaryPart) {
        real = realPart;
        imaginary = imaginaryPart;
        count++; // Increment object count when an object is created
    }

    // Getter function for the real part
    int getReal() const {
        return real;
    }

    // Getter function for the imaginary part
    int getImaginary() const {
        return imaginary;
    }

    // Static member function to get the object count
    static int getObjectCount() {
        return count;
    }

    // Display function to print the complex number
    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

// Initialize the static count member to 0
int Complex::count = 0;

int main() {
    // Create Complex objects
    Complex complex1;
    Complex complex2(3, 4);
    Complex complex3(1, 2);

    // Display the complex numbers
    std::cout << "Complex 1: ";
    complex1.display();

    std::cout << "Complex 2: ";
    complex2.display();

    std::cout << "Complex 3: ";
    complex3.display();

    // Get the object count using the static member function
    std::cout << "Number of Complex objects created: " << Complex::getObjectCount() << std::endl;

    return 0;
}
