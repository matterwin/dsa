#include <iostream>
#include <list>

int main() {
    // Create a list of integers
    std::list<int> myList;

    // Add elements to the list
    myList.push_back(10);
    myList.push_front(5);
    myList.push_back(20);

    // Insert elements at a specific position
    auto it = ++myList.begin(); // Iterator pointing to the second element
    myList.insert(it, 15);

    // Access elements using iterators
    std::cout << "Elements using iterators: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Access elements using range-based for loop (C++11)
    std::cout << "Elements using range-based for loop: ";
    for (const auto& elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Remove elements from the list
    myList.pop_front();
    myList.pop_back();

    // Print the modified list
    std::cout << "Modified list: ";
    for (const auto& elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Resize operation is not available for std::list

    // Clear the list
    myList.clear();

    // Check if the list is empty
    std::cout << "Is list empty? " << (myList.empty() ? "Yes" : "No") << std::endl;

    return 0;
}

