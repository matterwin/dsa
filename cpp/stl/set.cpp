#include <iostream>
#include <set>

int main() {
    // Create a set of integers
    std::set<int> mySet;

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(15);
    mySet.insert(30);
    mySet.insert(20); // Duplicate elements are ignored

    // Access elements using iterators
    std::cout << "Elements using iterators: ";
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Access elements using range-based for loop (C++11)
    std::cout << "Elements using range-based for loop: ";
    for (const auto& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Find an element in the set
    auto it = mySet.find(15);
    if (it != mySet.end()) {
        std::cout << "Found element 15 in the set" << std::endl;
    } else {
        std::cout << "Element 15 not found in the set" << std::endl;
    }

    // Remove an element from the set
    mySet.erase(20);

    // Print the modified set
    std::cout << "Modified set: ";
    for (const auto& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Check if the set is empty
    std::cout << "Is set empty? " << (mySet.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the set
    std::cout << "Size of the set: " << mySet.size() << std::endl;

    return 0;
}

