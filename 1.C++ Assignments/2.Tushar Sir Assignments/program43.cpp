#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    // Overload - operator
    Complex operator-(const Complex& other) {
        Complex temp;
        temp.real = real - other.real;
        temp.imag = imag - other.imag;
        return temp;
    }

    // Overload unary - operator
    Complex operator-() {
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }

    // Overload pre-increment ++ operator
    Complex& operator++() {
        real++;
        return *this;
    }

    // Overload post-increment ++ operator
    Complex operator++(int) {
        Complex temp = *this;
        real++;
        return temp;
    }

    // Display the Complex number
    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(1, 2);
    Complex c3, c4;

    // a) c3 = c1 + c2
    c3 = c1 + c2;
    c3.display();

    // b) c3 = c1 - c2
    c3 = c1 - c2;
    c3.display();

    // c) c2 = -c1
    c2 = -c1;
    c2.display();

    // d) c4 = ++c1
    c4 = ++c1;
    c4.display();
    c1.display(); // Display c1 after pre-increment

    // e) c4 = c1++
    c4 = c1++;
    c4.display();
    c1.display(); // Display c1 after post-increment

    return 0;
}
