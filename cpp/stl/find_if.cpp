#include <iostream>
#include <vector>
#include <algorithm>

// Predicate function to check if an element is even
bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    // Create a vector of integers
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Find the first even element in the vector
    auto it = std::find_if(vec.begin(), vec.end(), isEven);

    // Check if an even element is found
    if (it != vec.end()) {
        std::cout << "First even element found: " << *it << std::endl;
    } else {
        std::cout << "No even element found in the vector" << std::endl;
    }

    return 0;
}

