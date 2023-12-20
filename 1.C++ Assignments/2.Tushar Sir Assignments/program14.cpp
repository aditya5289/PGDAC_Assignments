#include <iostream>
int main() {
    int length, breadth;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the breadth of the rectangle: ";
    std::cin >> breadth;

    if (length <= 0 || breadth <= 0) {
        std::cout << "Invalid dimensions";
    } else {
        for (int i = 0; i <=length; i++) {
            for (int j = 0; j <=breadth; j++) {
                
                 if (i == 0 || i == length )
                 std::cout <<"* ";
                 else if(j == 0 || j == breadth)
                 std::cout <<"* ";
                 else 
                 std::cout <<"  ";
                
            }
            std::cout << std::endl;   //next row 
        }
    }

    return 0;
}
