#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> squaredVec;

    // Using std::transform with a lambda to square each element
    std::transform(vec.begin(), vec.end(), std::back_inserter(squaredVec), [](int x) {
        return x * x;
    });

    // Print the squared vector
    for (int num : squaredVec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

