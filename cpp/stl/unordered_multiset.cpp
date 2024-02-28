#include <iostream>
#include <unordered_set>

int main() {
    // Create an unordered_multiset of integers
    std::unordered_multiset<int> myUnorderedMultiSet;

    // Insert elements into the unordered_multiset
    myUnorderedMultiSet.insert(10);
    myUnorderedMultiSet.insert(20);
    myUnorderedMultiSet.insert(15);
    myUnorderedMultiSet.insert(30);
    myUnorderedMultiSet.insert(20); // Duplicate elements are allowed in unordered_multiset

    // Access elements using iterators
    std::cout << "Elements using iterators:" << std::endl;
    for (auto it = myUnorderedMultiSet.begin(); it != myUnorderedMultiSet.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Access elements using range-based for loop (C++11)
    std::cout << "\nElements using range-based for loop:" << std::endl;
    for (const auto& elem : myUnorderedMultiSet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Find an element in the unordered_multiset
    auto it = myUnorderedMultiSet.find(20);
    if (it != myUnorderedMultiSet.end()) {
        std::cout << "\nFound element 20 in the unordered_multiset" << std::endl;
    } else {
        std::cout << "\nElement 20 not found in the unordered_multiset" << std::endl;
    }

    // Remove an element from the unordered_multiset
    myUnorderedMultiSet.erase(20);

    // Print the modified unordered_multiset
    std::cout << "\nModified unordered_multiset:" << std::endl;
    for (const auto& elem : myUnorderedMultiSet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Check if the unordered_multiset is empty
    std::cout << "\nIs unordered_multiset empty? " << (myUnorderedMultiSet.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the unordered_multiset
    std::cout << "Size of the unordered_multiset: " << myUnorderedMultiSet.size() << std::endl;

    return 0;
}

