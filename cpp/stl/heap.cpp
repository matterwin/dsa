#include <iostream>
#include <queue>
#include <vector>

// Custom comparator for min-heap
struct Compare {
    bool operator()(const int& a, const int& b) {
        return a > b; // '>' for min-heap, '<' for max-heap
    }
};

int main() {
    // Create a priority queue of integers with custom comparator
    std::priority_queue<int, std::vector<int>, Compare> myPriorityQueue;

    /* ****** OR ****** minHeap
     
    // Create a priority queue of integers with custom comparator
    std::priority_queue<int, std::vector<int>, std::greater<int>> myPriorityQueue;
    
    * ****** OR ******/
  

     /* ****** OR ****** maxHeap (cpp default)
     
    // Create a priority queue of integers with custom comparator
    std::priority_queue<int> myPriorityQueue;
    
    * ************/

    // Insert elements into the priority queue
    myPriorityQueue.push(10);
    myPriorityQueue.push(20);
    myPriorityQueue.push(5);
    myPriorityQueue.push(15);

    // Print the top element of the priority queue
    std::cout << "Top element of the priority queue: " << myPriorityQueue.top() << std::endl;

    // Pop elements from the priority queue
    myPriorityQueue.pop();

    // Print the top element after popping
    std::cout << "Top element after popping: " << myPriorityQueue.top() << std::endl;

    // Check if the priority queue is empty
    std::cout << "Is priority queue empty? " << (myPriorityQueue.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the priority queue
    std::cout << "Size of the priority queue: " << myPriorityQueue.size() << std::endl;

    return 0;
}

