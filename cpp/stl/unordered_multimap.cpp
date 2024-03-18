#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Create an unordered_multimap of strings to integers
    std::unordered_multimap<std::string, int> myUnorderedMultiMap;

    // Insert elements into the unordered_multimap
    myUnorderedMultiMap.insert(std::make_pair("apple", 10));
    myUnorderedMultiMap.insert(std::make_pair("banana", 20));
    myUnorderedMultiMap.insert(std::make_pair("orange", 15));
    myUnorderedMultiMap.insert(std::make_pair("grape", 30));
    myUnorderedMultiMap.insert(std::make_pair("banana", 25)); // Duplicate keys are allowed in unordered_multimap

    // Access elements using range-based for loop (C++11)
    std::cout << "Elements using range-based for loop:" << std::endl;
    for (auto& [key, value] : myUnorderedMultiMap) {
        std::cout << key << ": " << value << std::endl;
    }

    // Access elements using iterators
    std::cout << "Elements using iterators:" << std::endl;
    for (auto it = myUnorderedMultiMap.begin(); it != myUnorderedMultiMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Access elements using range-based for loop (C++11)
    std::cout << "\nElements using range-based for loop:" << std::endl;
    for (const auto& pair : myUnorderedMultiMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find elements with a specific key in the unordered_multimap
    std::string keyToFind = "banana";
    auto range = myUnorderedMultiMap.equal_range(keyToFind);
    std::cout << "\nElements with key '" << keyToFind << "':" << std::endl;
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Remove all elements with a specific key from the unordered_multimap
    myUnorderedMultiMap.erase(keyToFind);

    // Print the modified unordered_multimap
    std::cout << "\nModified unordered_multimap:" << std::endl;
    for (const auto& pair : myUnorderedMultiMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Check if the unordered_multimap is empty
    std::cout << "\nIs unordered_multimap empty? " << (myUnorderedMultiMap.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the unordered_multimap
    std::cout << "Size of the unordered_multimap: " << myUnorderedMultiMap.size() << std::endl;

    return 0;
}

