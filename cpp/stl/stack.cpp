#include <iostream>
#include <stack>

int main() {
    // Create a stack of integers
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Print the top element of the stack
    std::cout << "Top element of the stack: " << myStack.top() << std::endl;

    // Pop elements from the stack
    myStack.pop();

    // Print the top element after popping
    std::cout << "Top element after popping: " << myStack.top() << std::endl;

    // Check if the stack is empty
    std::cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << std::endl;

    // Get the size of the stack
    std::cout << "Size of the stack: " << myStack.size() << std::endl;

    return 0;
}

