#include <iostream>
#include <memory>

int main() {
    // Create a unique pointer to an integer
    std::unique_ptr<int> ptr(new int(42));

    // Access the value through the unique pointer
    std::cout << "Value: " << *ptr << std::endl;

    return 0;  // Memory is automatically deallocated when ptr goes out of scope
}

