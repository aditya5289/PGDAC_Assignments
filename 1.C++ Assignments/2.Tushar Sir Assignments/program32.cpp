
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

int main() {
    BOOK book; // Declare a variable of type BOOK

    // Input: Accept data for a book
    std::cout << "Enter Book ID: ";
    std::cin >> book.bookId;

    std::cin.ignore(); // Ignore the newline character left in the buffer

    std::cout << "Enter Title: ";
    std::getline(std::cin, book.title);

    std::cout << "Enter Price: ";
    std::cin >> book.price;

    // Display the book record
    std::cout << "Book Record:" << std::endl;
    std::cout << "Book ID: " << book.bookId << std::endl;
    std::cout << "Title: " << book.title << std::endl;
    std::cout << "Price: $" << book.price << std::endl;

    return 0;
}
