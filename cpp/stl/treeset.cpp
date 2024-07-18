#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    std::set<int> mySet = {1, 3, 4, 5, 7, 8, 9, 11};

    int lowerVal = 4;
    int upperVal = 8;

    // Search for first element x such that i <= x
    auto lower = mySet.lower_bound(lowerVal);

    // Search for first element x such that i > x
    auto upper = mySet.upper_bound(upperVal);

    std::cout << "Elements in the set: ";
    for (int elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Using lower_bound(" << lowerVal << "): ";
    if (lower != mySet.end()) {
        std::cout << *lower << std::endl;
    } else {
        std::cout << "No elements found." << std::endl;
    }

    std::cout << "Using upper_bound(" << upperVal << "): ";
    if (upper != mySet.end()) {
        std::cout << *upper << std::endl;
    } else {
        std::cout << "No elements found." << std::endl;
    }




    
    // Can do it with vectors too
    std::vector<int> myVector = {1, 3, 4, 5, 7, 8, 9, 11};

    auto lowerV = std::lower_bound(myVector.begin(), myVector.end(), lowerVal);
    auto upperV = std::upper_bound(myVector.begin(), myVector.end(), upperVal);

    std::cout << "Elements in the vector: ";
    for (int elem : myVector) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Range between lower_bound(" << lowerVal << ") and upper_bound(" << upperVal << "): ";
    for (auto it = lower; it != upper; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}


// lower_bound is used to find the first element in the set that is not less than lowerVal.
// upper_bound is used to find the first element in the set that is greater than upperVal.

