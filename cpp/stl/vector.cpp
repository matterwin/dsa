#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> vec;

    // Add elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Access elements using iterators
    std::cout << "Elements using iterators: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Access elements using range-based for loop (C++11)
    std::cout << "Elements using range-based for loop: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Insert an element at a specific position
    vec.insert(vec.begin() + 1, 15);

    // Remove an element from the vector
    vec.erase(vec.begin() + 2);

    // Print the modified vector
    std::cout << "Modified vector: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Resize the vector
    vec.resize(5, 50); // Resize to size 5, fill with value 50 if needed

    // Print the resized vector
    std::cout << "Resized vector: ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Clear the vector
    vec.clear();

    // Check if the vector is empty
    std::cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << std::endl;

    return 0;
}

