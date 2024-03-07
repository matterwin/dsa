#include <iostream>

int main() {
    int *ptr = new int; // Dynamically allocate memory for a single integer
    *ptr = 10; // Assign a value to the dynamically allocated memory

    std::cout << "Value stored in dynamically allocated memory: " << *ptr << std::endl;

    // Deallocate the memory
    delete ptr;

    return 0;
}

