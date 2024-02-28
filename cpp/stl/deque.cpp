#include <iostream>
#include <deque>

int main() {
    // Create a deque of integers
    std::deque<int> deq;

    // Add elements to the front and back of the deque
    deq.push_front(10);
    deq.push_back(20);
    deq.push_front(5);
    deq.push_back(30);

    // Access elements using iterators
    std::cout << "Elements using iterators: ";
    for (auto it = deq.begin(); it != deq.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Access elements using range-based for loop (C++11)
    std::cout << "Elements using range-based for loop: ";
    for (const auto& elem : deq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Insert an element at a specific position
    deq.insert(deq.begin() + 2, 15);

    // Remove an element from the deque
    deq.pop_back();
    deq.pop_front();

    // Print the modified deque
    std::cout << "Modified deque: ";
    for (const auto& elem : deq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Resize the deque
    deq.resize(3, 50); // Resize to size 3, fill with value 50 if needed

    // Print the resized deque
    std::cout << "Resized deque: ";
    for (const auto& elem : deq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Clear the deque
    deq.clear();

    // Check if the deque is empty
    std::cout << "Is deque empty? " << (deq.empty() ? "Yes" : "No") << std::endl;

    return 0;
}

