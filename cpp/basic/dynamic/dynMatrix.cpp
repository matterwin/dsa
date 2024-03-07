#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows and columns: ";
    std::cin >> rows >> cols;

    // Dynamically allocate memory for a 2D array
    int **arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }

    // Populate the 2D array
    int count = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = count++;
        }
    }

    // Display the 2D array elements
    std::cout << "2D Array elements:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Deallocate the memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

