#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header

using namespace std;

// Custom comparison function to sort in descending order
bool compareDescending(int a, int b) {
    return a > b; // Sort in descending order
}

int main() {
    vector<int> numbers = {5, 2, 7, 1, 9};

    // Sort the numbers in ascending order
    sort(numbers.begin(), numbers.end());

    // Sort the numbers in descending order using custom comparison function
    sort(numbers.begin(), numbers.end(), compareDescending);

    // Sort the numbers in descending order using a lambda expression
    sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b; // Sort in descending order
    });

    // Print the sorted numbers
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


