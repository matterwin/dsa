#include <iostream>

// Function template to find the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax = max(10, 20);
    double doubleMax = max(3.14, 2.718);

    std::cout << "Max of integers: " << intMax << std::endl;
    std::cout << "Max of doubles: " << doubleMax << std::endl;

    return 0;
}

