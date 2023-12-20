#include <iostream>

const int ROWS = 3;
const int COLS = 3;

// Function to accept a matrix
void Accept(int matrix[ROWS][COLS]) {
    std::cout << "Enter a " << ROWS << "x" << COLS << " matrix:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void Display(int matrix[ROWS][COLS]) {
    std::cout << "Matrix:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to find the transpose of a matrix
void Transpose(int matrix[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Function to add two matrices
void AddMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];

    // Accept the first matrix
    Accept(matrix1);

    // Display the first matrix
    Display(matrix1);

    // Find and display the transpose of the first matrix
    Transpose(matrix1, result);
    std::cout << "Transpose of the matrix:" << std::endl;
    Display(result);

    // Accept the second matrix
    Accept(matrix2);

    // Display the second matrix
    Display(matrix2);

    // Find and display the addition of the two matrices
    AddMatrices(matrix1, matrix2, result);
    std::cout << "Addition of the matrices:" << std::endl;
    Display(result);

    return 0;
}
