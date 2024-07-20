#include <iostream>

int recursiveBinarySearch(int arr[], int left, int right, int target) {
  if (right >= left) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
      return mid;

    if (arr[mid] > target)
      return recursiveBinarySearch(arr, left, mid - 1, target);

    return recursiveBinarySearch(arr, mid + 1, right, target);
  }

  return -1;
}

int iterativeBinarySearch(int arr[], int left, int right, int target) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
      return mid;

    if (arr[mid] > target)
      right = mid - 1;
    else
      left = mid + 1;
  }

  return -1;
}

int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 10;
  int result1 = recursiveBinarySearch(arr, 0, n - 1, target);
  int result2 = iterativeBinarySearch(arr, 0, n - 1, target);

  if (result1 != -1 && result2 != -1) {
    std::cout << "Element is present at index " << result1 
    << " (recursive) and " << result2 << " (iterative)" << std::endl;
  }
  else
    std::cout << "Element is not present in array" << std::endl;

  return 0;
}

