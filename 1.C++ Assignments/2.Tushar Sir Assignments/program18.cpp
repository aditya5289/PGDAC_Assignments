#include <iostream>
#include <iomanip>

void charLine(char character, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << character;
    }
    std::cout << std::endl;
}

int main() {
    std::string dataTypes[] = {"Integer", "Character", "Float"};
    int dataSizes[] = {4, 1, 4};

    int maxTypeLength = 0;
    for (const std::string& dataType : dataTypes) {
        maxTypeLength = std::max(maxTypeLength, static_cast<int>(dataType.length()));
    }

    charLine('_', maxTypeLength + 30);

    std::cout << " " << std::setw(maxTypeLength) << std::left << "Data Type" << "         Size in Bytes " << std::endl;
    charLine('_', maxTypeLength + 30);

    for (int i = 0; i < 3; i++) {
        std::cout << " " << std::setw(maxTypeLength) << std::left << dataTypes[i] << "         " << std::setw(15) << dataSizes[i] << " " << std::endl;
        charLine('_', maxTypeLength + 30);
    }

    return 0;
}
