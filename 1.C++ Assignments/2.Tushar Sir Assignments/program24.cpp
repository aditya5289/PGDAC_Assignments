#include <iostream>

// Function to find the maximum and minimum values in an array
void findMaxMin(const int arr[], int size, int& maxVal, int& minVal) {
    maxVal = arr[0];
    minVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
}

// Function to multiply each element of the array by 5
void multiplyBy5(const int arr[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = arr[i] * 5;
    }
}

int main() {
    const int arrSize = 5;
    int arr[arrSize];
    int result[arrSize];
    int maxVal, minVal;

    // Input: Accept five integers in an array
    std::cout << "Enter " << arrSize << " integers: ";
    for (int i = 0; i < arrSize; i++) {
        std::cin >> arr[i];
    }

    // a) Find maximum and minimum values in the array
    findMaxMin(arr, arrSize, maxVal, minVal);

    std::cout << "Maximum value: " << maxVal << std::endl;
    std::cout << "Minimum value: " << minVal << std::endl;

    // b) Multiply each element of the array by 5 and store it in another array
    multiplyBy5(arr, arrSize, result);

    std::cout << "Array after multiplying each element by 5: ";
    for (int i = 0; i < arrSize; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
