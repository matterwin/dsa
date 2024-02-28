#include <iostream>
#include <string>

int main() {
    // Create a string
    std::string str = "Hello, world!";

    // Print the string
    std::cout << "String: " << str << std::endl;

    // Get the length of the string
    std::cout << "Length of the string: " << str.length() << std::endl;

    // Access individual characters of the string
    std::cout << "First character: " << str[0] << std::endl;
    std::cout << "Last character: " << str[str.length() - 1] << std::endl;

    // Append to the string
    str += " Welcome to C++!";
    std::cout << "Modified string: " << str << std::endl;

    // Find substring in the string
    std::string searchStr = "world";
    size_t found = str.find(searchStr);
    if (found != std::string::npos) {
        std::cout << "Substring '" << searchStr << "' found at index " << found << std::endl;
    } else {
        std::cout << "Substring '" << searchStr << "' not found in the string" << std::endl;
    }

    return 0;
}

