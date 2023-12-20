#include <iostream>

const int ROWS = 3;
const int COLS = 3;

// Function to multiply two matrices
void MultiplyMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to display a matrix
void Display(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];

    // Input: Enter the first matrix
    std::cout << "Enter the first 3x3 matrix:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cin >> matrix1[i][j];
        }
    }

    // Input: Enter the second matrix
    std::cout << "Enter the second 3x3 matrix:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cin >> matrix2[i][j];
        }
    }

    // Multiply the matrices and store the result in 'result'
    MultiplyMatrices(matrix1, matrix2, result);

    // Display the result
    std::cout << "Resultant Matrix:" << std::endl;
    Display(result);

    return 0;
}
