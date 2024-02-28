#include <iostream>
#include <forward_list>

int main() {
    // Create a forward_list of integers
    std::forward_list<int> myList;

    // Add elements to the front of the list
    myList.push_front(10);
    myList.push_front(5);
    myList.push_front(20);

    // Insert elements after a specific position
    auto it = myList.begin(); // Iterator pointing to the first element
    ++it; // Move the iterator to the second element
    myList.insert_after(it, 15);

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

    // Remove elements from the front of the list
    myList.pop_front();

    // Print the modified list
    std::cout << "Modified list: ";
    for (const auto& elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Resize operation is not available for std::forward_list

    // Clear the list
    myList.clear();

    // Check if the list is empty
    std::cout << "Is list empty? " << (myList.empty() ? "Yes" : "No") << std::endl;

    return 0;
}

