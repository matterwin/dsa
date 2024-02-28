#include <iostream>
#include <queue>

int main() {
    // Create a queue of integers
    std::queue<int> myQueue;

    // Enqueue elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Print the front element of the queue
    std::cout << "Front element of the queue: " << myQueue.front() << std::endl;

    // Dequeue elements from the queue
    myQueue.pop();

    // Print the front element after dequeuing
    std::cout << "Front element after dequeuing: " << myQueue.front() << std::endl;

    // Check if the queue is empty
    std::cout << "Is queue empty? " << (myQueue.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the queue
    std::cout << "Size of the queue: " << myQueue.size() << std::endl;

    return 0;
}

