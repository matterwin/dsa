#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered_map of strings to integers
    std::unordered_map<std::string, int> myHashMap;

    // Insert elements into the unordered_map
    myHashMap["apple"] = 10;
    myHashMap["banana"] = 20;
    myHashMap["orange"] = 15;
    myHashMap["grape"] = 30;
    myHashMap["banana"] = 25; // Overwrites the previous value of "banana"

    // Access elements using range-based for loop (C++11)
    std::cout << "Elements using range-based for loop:" << std::endl;
    for (auto& [key, value] : myHashMap) {
        std::cout << key << ": " << value << std::endl;
    }

    // Access elements using iterators
    std::cout << "Elements using iterators:" << std::endl;
    for (auto it = myHashMap.begin(); it != myHashMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Access elements using range-based for loop (C++11)
    std::cout << "\nElements using range-based for loop:" << std::endl;
    for (const auto& pair : myHashMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find an element in the unordered_map
    auto it = myHashMap.find("banana");
    if (it != myHashMap.end()) {
        std::cout << "\nFound value for 'banana': " << it->second << std::endl;
    } else {
        std::cout << "\n'banana' not found in the unordered_map" << std::endl;
    }

    // Remove an element from the unordered_map
    myHashMap.erase("orange");

    // Print the modified unordered_map
    std::cout << "\nModified unordered_map:" << std::endl;
    for (const auto& pair : myHashMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Check if the unordered_map is empty
    std::cout << "\nIs unordered_map empty? " << (myHashMap.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the unordered_map
    std::cout << "Size of the unordered_map: " << myHashMap.size() << std::endl;

    return 0;
}

