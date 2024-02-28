#include <iostream>
#include <utility> // for std::pair

int main() {
    // Creating a pair of integer and double
    std::pair<int, double> pair1(5, 3.14);

    // Accessing elements of the pair
    std::cout << "First element of pair1: " << pair1.first << std::endl;
    std::cout << "Second element of pair1: " << pair1.second << std::endl;

    // Modifying elements of the pair
    pair1.first = 10;
    pair1.second = 2.718;

    std::cout << "Modified first element of pair1: " << pair1.first << std::endl;
    std::cout << "Modified second element of pair1: " << pair1.second << std::endl;

    // Creating a pair with make_pair function
    auto pair2 = std::make_pair("hello", 42);

    // Accessing elements of the pair
    std::cout << "First element of pair2: " << pair2.first << std::endl;
    std::cout << "Second element of pair2: " << pair2.second << std::endl;

    return 0;
}

