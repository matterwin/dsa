#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory for an integer array
    int *arr = new int[size];

    // Populate the array
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 2;
    }

    // Display the array elements
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}

