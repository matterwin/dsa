#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create a vector of integers
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Find the element 30 in the vector
    auto it = std::find(vec.begin(), vec.end(), 30);

    // Check if the element is found
    if (it != vec.end()) {
        std::cout << "Element 30 found at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Element 30 not found in the vector" << std::endl;
    }

    return 0;
}

