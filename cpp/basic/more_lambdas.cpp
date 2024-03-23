#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Lambda function that calls itself to say Hello World!
    auto hello = []() {
      cout << "Hello, World!" << endl;
    }();

    // Lambda function to calculate the square of a number
    auto square = [](int x) {
        return x * x;
    };

    cout << "Square of 5: " << square(5) << endl;



    // Lambda function to check if a number is even
    auto isEven = [](int x) {
        return x % 2 == 0;
    };

    cout << "Is 7 even? " << (isEven(7) ? "Yes" : "No") << endl;

    // Lambda function to find the maximum value in a vector
    vector<int> numbers = {3, 1, 7, 4, 9, 2};
    auto maxElement = [](const vector<int>& vec) {
        return *max_element(vec.begin(), vec.end());
    };

    cout << "Maximum element: " << maxElement(numbers) << endl;

    // Lambda function to display a message
    auto showMessage = []() {
        cout << "Hello from lambda!" << endl;
    };

    showMessage();

    // Recursive lambda function to calculate factorial
    auto factorial = [](int n) {
        if (n <= 1) {
            return 1;
        } else {
            return n * factorial(n - 1); // Recursive call
        }
    };

    cout << "Factorial of 5: " << factorial(5) << endl;

    return 0;
}
