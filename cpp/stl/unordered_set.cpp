#include <iostream>
#include <unordered_set>

int main() {
    // Create an unordered_set of integers
    std::unordered_set<int> myHashSet;

    // Insert elements into the unordered_set
    myHashSet.insert(10);
    myHashSet.insert(20);
    myHashSet.insert(15);
    myHashSet.insert(30);
    myHashSet.insert(20); // Duplicate elements are ignored i.e. are not allowed

    // Access elements using iterators
    std::cout << "Elements using iterators: ";
    for (auto it = myHashSet.begin(); it != myHashSet.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Access elements using range-based for loop (C++11)
    std::cout << "Elements using range-based for loop: ";
    for (const auto& elem : myHashSet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Find an element in the unordered_set
    auto it = myHashSet.find(15);
    if (it != myHashSet.end()) {
        std::cout << "Found element 15 in the unordered_set" << std::endl;
    } else {
        std::cout << "Element 15 not found in the unordered_set" << std::endl;
    }

    // Remove an element from the unordered_set
    myHashSet.erase(20);

    // Print the modified unordered_set
    std::cout << "Modified unordered_set: ";
    for (const auto& elem : myHashSet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Check if the unordered_set is empty
    std::cout << "Is unordered_set empty? " << (myHashSet.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the unordered_set
    std::cout << "Size of the unordered_set: " << myHashSet.size() << std::endl;

    return 0;
}

