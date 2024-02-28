#include <iostream>
#include <set>

int main() {
    // Create a multiset of integers
    std::multiset<int> myMultiSet;

    // Insert elements into the multiset
    myMultiSet.insert(10);
    myMultiSet.insert(20);
    myMultiSet.insert(15);
    myMultiSet.insert(30);
    myMultiSet.insert(20); // Duplicate elements are allowed in multiset

    // Access elements using iterators
    std::cout << "Elements using iterators:" << std::endl;
    for (auto it = myMultiSet.begin(); it != myMultiSet.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Access elements using range-based for loop (C++11)
    std::cout << "\nElements using range-based for loop:" << std::endl;
    for (const auto& elem : myMultiSet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Find an element in the multiset
    auto it = myMultiSet.find(20);
    if (it != myMultiSet.end()) {
        std::cout << "\nFound element 20 in the multiset" << std::endl;
    } else {
        std::cout << "\nElement 20 not found in the multiset" << std::endl;
    }

    // Remove an element from the multiset
    myMultiSet.erase(20);

    // Print the modified multiset
    std::cout << "\nModified multiset:" << std::endl;
    for (const auto& elem : myMultiSet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Check if the multiset is empty
    std::cout << "\nIs multiset empty? " << (myMultiSet.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the multiset
    std::cout << "Size of the multiset: " << myMultiSet.size() << std::endl;

    return 0;
}

