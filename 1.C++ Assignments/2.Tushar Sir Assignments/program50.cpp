#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void Sort(std::vector<T>& data) {
    std::sort(data.begin(), data.end());
}

int main() {
    // Example usage with different data types
    std::vector<int> intData = {5, 2, 9, 1, 5, 0};
    std::vector<char> charData = {'d', 'a', 'c', 'b', 'e'};
    std::vector<float> floatData = {3.14f, 1.618f, 2.718f};
    std::vector<double> doubleData = {1.234, 5.678, 3.456, 2.345};

    Sort(intData);
    Sort(charData);
    Sort(floatData);
    Sort(doubleData);

    std::cout << "Sorted intData: ";
    for (const auto& item : intData) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted charData: ";
    for (const auto& item : charData) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted floatData: ";
    for (const auto& item : floatData) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted doubleData: ";
    for (const auto& item : doubleData) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    return 0;
}
