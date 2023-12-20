#include <iostream>

class Matrix {
private:
    int** matrix; // Pointer to store the 2D array
    int rows;     // Number of rows
    int cols;     // Number of columns

public:
    // Default constructor
    Matrix(int r = 3, int c = 3) : rows(r), cols(c) {
        matrix = new int*[rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = 0; // Initialize elements to 0
            }
        }
    }

    // Parameterized constructor
    Matrix(int r, int c, int** data) : rows(r), cols(c) {
        matrix = new int*[rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = data[i][j];
            }
        }
    }

    // Copy constructor (performs deep copy)
    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols) {
        matrix = new int*[rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = other.matrix[i][j];
            }
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // Overload + operator for matrix addition
    Matrix operator+(const Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrix dimensions do not match.");
        }

        Matrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }

        return result;
    }

    // Overload ! operator to calculate the transpose of a square matrix
    Matrix operator!() {
        if (rows != cols) {
            throw std::invalid_argument("Matrix is not square.");
        }

        Matrix transpose(cols, rows);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                transpose.matrix[j][i] = matrix[i][j];
            }
        }

        return transpose;
    }

    // Overload >> operator to input row, column size, and matrix elements
    friend std::istream& operator>>(std::istream& in, Matrix& mat) {
        std::cout << "Enter the number of rows: ";
        in >> mat.rows;
        std::cout << "Enter the number of columns: ";
        in >> mat.cols;

        mat.matrix = new int*[mat.rows];
        for (int i = 0; i < mat.rows; i++) {
            mat.matrix[i] = new int[mat.cols];
            std::cout << "Enter elements for row " << i + 1 << " (separated by spaces): ";
            for (int j = 0; j < mat.cols; j++) {
                in >> mat.matrix[i][j];
            }
        }
        return in;
    }

    // Overload << operator to display the matrix
    friend std::ostream& operator<<(std::ostream& out, const Matrix& mat) {
        for (int i = 0; i < mat.rows; i++) {
            for (int j = 0; j < mat.cols; j++) {
                out << mat.matrix[i][j] << " ";
            }
            out << std::endl;
        }
        return out;
    }
};

int main() {
    Matrix mat1, mat2, mat3;
    std::cin >> mat1;
    std::cout << "Matrix 1:" << std::endl << mat1;

    // Copy constructor
    Matrix mat4 = mat1;
    std::cout << "Matrix 4 (Copy of Matrix 1):" << std::endl << mat4;

    std::cin >> mat2;
    std::cout << "Matrix 2:" << std::endl << mat2;

    try {
        // Matrix addition
        mat3 = mat1 + mat2;
        std::cout << "Matrix 3 (Sum of Matrix 1 and Matrix 2):" << std::endl << mat3;

        // Transpose
        Matrix transpose = !mat1;
        std::cout << "Transpose of Matrix 1:" << std::endl << transpose;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
