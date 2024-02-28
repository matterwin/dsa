#include <iostream>
#include <vector>
#include <algorithm>

// Function to square a number
int square(int x) {
    return x * x;
}

int main() {
    // Create a vector of integers
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Create a vector to store the squared values
    std::vector<int> squaredVec;

    // Perform transformation (square each element) using std::transform
    std::transform(vec.begin(), vec.end(), std::back_inserter(squaredVec), square);

    // Print the original vector
    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the vector after transformation
    std::cout << "Squared vector: ";
    for (int num : squaredVec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

