#include <iostream>
#include <map>
#include <string>

// Typedefs
typedef unsigned long ulong;
typedef int* intPtr;
typedef void (*FuncPtr)(int, int);
typedef std::map<std::string, int> StringIntMap;

// Function to be used with function pointer
void add(int a, int b) {
  std::cout << "Sum: " << a + b << std::endl;
}

// Structure definition with typedef
typedef struct {
  int x;
  int y;
} Point;

int main() {
  // Using ulong alias
  ulong a = 10;
  std::cout << "Value of a: " << a << std::endl;

  // Using intPtr alias
  int b = 20;
  intPtr p = &b;
  std::cout << "Value of b: " << *p << std::endl;

  // Using FuncPtr alias
  FuncPtr f = add;
  f(5, 3);

  // Using Point alias
  Point p1;
  p1.x = 10;
  p1.y = 20;
  std::cout << "Point coordinates: (" << p1.x << ", " << p1.y << ")" << std::endl;

  // Using StringIntMap alias
  StringIntMap myMap;
  myMap["one"] = 1;
  myMap["two"] = 2;
  for (const auto& pair : myMap) {
      std::cout << pair.first << ": " << pair.second << std::endl;
  }

  return 0;
}


