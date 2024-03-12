#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    // Custom comparator to sort vectors by the second value
    auto comparator = [](const int* a, const int* b) { return a[1] > b[1]; };

    // Priority queue with custom comparator
    priority_queue<int*, vector<int*>, decltype(comparator)> pq(comparator);

    // Insert elements into the priority queue
    pq.push(new int[]{1, 5});
    pq.push(new int[]{2, 3});
    pq.push(new int[]{3, 7});
    pq.push(new int[]{4, 1});

    // Print the priority queue (sorted by second value)
    while (!pq.empty()) {
        const int* arr = pq.top();
        cout << arr[0] << ", " << arr[1] << endl;
        delete[] arr; // Don't forget to delete the dynamically allocated memory
        pq.pop();
    }

    return 0;
}

