#include <iostream>
#include <vector>
#include <algorithm>

// Predicate function to check if an element is odd
bool isOdd(int n) {
    return n % 2 != 0;
}

int main() {
    // Create a vector of integers
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Print the original vector
    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Use remove_if to remove odd elements
    auto newEnd = std::remove_if(vec.begin(), vec.end(), isOdd);

    // Print the vector after remove_if
    std::cout << "Vector after removing odd elements: ";
    for (auto it = vec.begin(); it != newEnd; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

