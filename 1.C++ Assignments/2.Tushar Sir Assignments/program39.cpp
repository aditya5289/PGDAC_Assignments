#include <iostream>

class Complex {
private:
    int real;
    int imaginary;

public:
    // Default constructor
    Complex() {
        real = 0;
        imaginary = 0;
    }

    // Parameterized constructor
    Complex(int realPart, int imaginaryPart) {
        real = realPart;
        imaginary = imaginaryPart;
    }

    // Getter function for the real part
    int getReal() const {
        return real;
    }

    // Getter function for the imaginary part
    int getImaginary() const {
        return imaginary;
    }

    // Setter function for the real part
    void setReal(int realPart) {
        real = realPart;
    }

    // Setter function for the imaginary part
    void setImaginary(int imaginaryPart) {
        imaginary = imaginaryPart;
    }

    // Display function to print the complex number
    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Create Complex objects using default and parameterized constructors
    Complex complex1;               // Default constructor
    Complex complex2(3, 4);         // Parameterized constructor

    // Display the complex numbers
    std::cout << "Complex 1: ";
    complex1.display();

    std::cout << "Complex 2: ";
    complex2.display();

    // Use getter and setter functions
    complex1.setReal(1);
    complex1.setImaginary(2);

    std::cout << "Updated Complex 1: ";
    complex1.display();

    // Access real and imaginary parts using getter functions
    std::cout << "Real part of Complex 2: " << complex2.getReal() << std::endl;
    std::cout << "Imaginary part of Complex 2: " << complex2.getImaginary() << std::endl;

    return 0;
}
