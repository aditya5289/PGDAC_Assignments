#include <iostream>
#include <cstring>

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Create two Person structures
    Person person1;
    Person person2;

    // Element-by-element copying
    std::cout << "Element-by-element copying:" << std::endl;

    // Initialize person1
    strcpy(person1.name, "John");
    person1.age = 30;

    // Copy person1 to person2 element by element
    strcpy(person2.name, person1.name);
    person2.age = person1.age;

    // Display the copied values
    std::cout << "Person 1: " << person1.name << ", " << person1.age << " years old" << std::endl;
    std::cout << "Person 2: " << person2.name << ", " << person2.age << " years old" << std::endl;

    // Copying the entire structure
    std::cout << "\nCopying the entire structure:" << std::endl;

    // Initialize person1 again
    strcpy(person1.name, "Alice");
    person1.age = 25;

    // Copy the entire structure from person1 to person2
    person2 = person1;

    // Display the copied values
    std::cout << "Person 1: " << person1.name << ", " << person1.age << " years old" << std::endl;
    std::cout << "Person 2: " << person2.name << ", " << person2.age << " years old" << std::endl;

    return 0;
}
