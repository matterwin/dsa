#include <iostream>
#include <map>

int main() {
    // Create a map of strings to integers
    std::map<std::string, int> myMap;

    // Insert elements into the map
    myMap["apple"] = 10;
    myMap["banana"] = 20;
    myMap["orange"] = 15;
    myMap["grape"] = 30;
    myMap["banana"] = 25; // Overwrites the previous value of "banana"

    // Access elements using iterators
    std::cout << "Elements using iterators:" << std::endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Access elements using range-based for loop (C++11)
    std::cout << "\nElements using range-based for loop:" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find an element in the map
    auto it = myMap.find("banana");
    if (it != myMap.end()) {
        std::cout << "\nFound value for 'banana': " << it->second << std::endl;
    } else {
        std::cout << "\n'banana' not found in the map" << std::endl;
    }

    // Remove an element from the map
    myMap.erase("orange");

    // Print the modified map
    std::cout << "\nModified map:" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Check if the map is empty
    std::cout << "\nIs map empty? " << (myMap.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the map
    std::cout << "Size of the map: " << myMap.size() << std::endl;

    return 0;
}

