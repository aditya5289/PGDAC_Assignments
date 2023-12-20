#include <iostream>
#include <string>

// Define the Book structure
struct Book {
    int bookId;
    std::string title;
    double price;
};

// Create an alias "BOOK" using typedef
typedef struct Book BOOK;

// Function to accept data for a book
void InputBookData(BOOK& book) {
    std::cout << "Enter Book ID: ";
    std::cin >> book.bookId;

    std::cin.ignore(); // Ignore the newline character left in the buffer

    std::cout << "Enter Title: ";
    std::getline(std::cin, book.title);

    std::cout << "Enter Price: ";
    std::cin >> book.price;
}

// Function to display the book record
void DisplayBookData(const BOOK& book) {
    std::cout << "Book ID: " << book.bookId << std::endl;
    std::cout << "Title: " << book.title << std::endl;
    std::cout << "Price: $" << book.price << std::endl;
}

int main() {
    BOOK books[5]; // Array to hold records of five books

    // Input: Accept data for five books
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter details for Book " << i + 1 << std::endl;
        InputBookData(books[i]);
        std::cout << std::endl;
    }

    // Display the records of all the books
    std::cout << "Book Records:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Book " << i + 1 << ":" << std::endl;
        DisplayBookData(books[i]);
        std::cout << std::endl;
    }

    return 0;
}
