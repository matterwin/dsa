#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create a vector of integers
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Print the original vector
    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Reverse the vector
    std::reverse(vec.begin(), vec.end());

    // Print the reversed vector
    std::cout << "Reversed vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

