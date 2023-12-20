#include <iostream>
#include <vector>

int main() {
    std::vector<int> myVector;
    
    // Read in ten integers from standard input and store them in the vector
    std::cout << "Enter ten integers:" << std::endl;
    for (int i = 0; i < 10; i++) {
        int num;
        std::cin >> num;
        myVector.push_back(num);
    }
    
    // a) Insert two more values into the vector at the end
    myVector.push_back(11);
    myVector.push_back(12);
    
    // b) Print the vector using subscript notation
    std::cout << "Vector elements using subscript notation:" << std::endl;
    for (int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;
    
    // c) Remove two elements from the end of the vector
    myVector.pop_back();
    myVector.pop_back();
    
    // d) Print the vector using iterator
    std::cout << "Vector elements using iterator:" << std::endl;
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
