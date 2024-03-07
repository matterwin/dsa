#include <iostream>
#include <memory>

int main() {
    // Create a shared pointer to an integer
    std::shared_ptr<int> ptr(new int(42));

    // Create another shared pointer pointing to the same object
    std::shared_ptr<int> ptr2 = ptr;

    // Access the value through any of the shared pointers
    std::cout << "Value (ptr): " << *ptr << std::endl;
    std::cout << "Value (ptr2): " << *ptr2 << std::endl;

    return 0;  // Memory is deallocated when both ptr and ptr2 go out of scope
}

