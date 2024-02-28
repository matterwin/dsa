#include <iostream>

// Function to modify an integer value using a pointer
void modifyValue(int* ptr) {
    *ptr = 20;  // Modify the value at the address pointed to by ptr
}

// Define a Node structure for a linked list
struct Node {
    int data;
    Node* next;
};

int main() {
    // Declare an integer variable and a pointer to it
    int x = 10;
    int* ptr = &x;

    // Dereference the pointer to access the value
    std::cout << "Value of x: " << *ptr << std::endl;

    // Perform pointer arithmetic with an array
    int arr[] = {1, 2, 3, 4, 5};
    int* arrPtr = arr;
    std::cout << "Value at index 2: " << *(arrPtr + 2) << std::endl;

    // Dynamic memory allocation
    int* dynamicPtr = new int(42);
    std::cout << "Value allocated dynamically: " << *dynamicPtr << std::endl;
    delete dynamicPtr;  // Free the dynamically allocated memory

    // Pass by reference using pointers
    modifyValue(&x);
    std::cout << "Modified value of x: " << x << std::endl;

    // Data structures: Linked list
    Node* head = new Node();
    head->data = 10;
    head->next = nullptr;
    std::cout << "Data in the first node of the linked list: " << head->data << std::endl;

    // Cleanup
    delete head;

    return 0;
}

