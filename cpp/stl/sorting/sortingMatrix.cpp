#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<int>> matrix = {{3, 1, 4},
                                   {1, 5, 9},
                                   {2, 6, 5}};

    // Sort rows of the matrix
    for (auto& row : matrix) {
        sort(row.begin(), row.end());
    }

    // Print the sorted matrix
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}

