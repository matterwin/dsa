#include <iostream>
#include <map>

int main() {
    // Create a multimap of strings to integers
    std::multimap<std::string, int> myMultiMap;

    // Insert elements into the multimap
    myMultiMap.insert(std::make_pair("apple", 10));
    myMultiMap.insert(std::make_pair("banana", 20));
    myMultiMap.insert(std::make_pair("orange", 15));
    myMultiMap.insert(std::make_pair("grape", 30));
    myMultiMap.insert(std::make_pair("banana", 25)); // Duplicate keys are allowed in multimap

    // Access elements using iterators
    std::cout << "Elements using iterators:" << std::endl;
    for (auto it = myMultiMap.begin(); it != myMultiMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Access elements using range-based for loop (C++11)
    std::cout << "\nElements using range-based for loop:" << std::endl;
    for (const auto& pair : myMultiMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find elements with a specific key in the multimap
    auto range = myMultiMap.equal_range("banana");
    std::cout << "\nElements with key 'banana':" << std::endl;
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Remove all elements with a specific key from the multimap
    myMultiMap.erase("orange");

    // Print the modified multimap
    std::cout << "\nModified multimap:" << std::endl;
    for (const auto& pair : myMultiMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Check if the multimap is empty
    std::cout << "\nIs multimap empty? " << (myMultiMap.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the multimap
    std::cout << "Size of the multimap: " << myMultiMap.size() << std::endl;

    return 0;
}

