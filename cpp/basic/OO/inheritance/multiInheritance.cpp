#include <iostream>

// Base class 1
class A {
public:
    void displayA() {
        std::cout << "A" << std::endl;
    }
};

// Base class 2
class B {
public:
    void displayB() {
        std::cout << "B" << std::endl;
    }
};

// Derived class
class C : public A, public B {
public:
    void displayC() {
        std::cout << "C" << std::endl;
    }
};

int main() {
    C obj;
    obj.displayA(); // Accessing method from class A
    obj.displayB(); // Accessing method from class B
    obj.displayC(); // Accessing method from class C

    return 0;
}

