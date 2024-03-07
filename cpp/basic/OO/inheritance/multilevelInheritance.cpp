#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal eats" << std::endl;
    }
};

// Intermediate class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class
class Labrador : public Dog {
public:
    void color() {
        std::cout << "Labrador is black" << std::endl;
    }
};

int main() {
    Labrador lab;
    
    // Accessing methods from different levels of inheritance
    lab.eat();  // Accessing method from Animal
    lab.bark(); // Accessing method from Dog
    lab.color(); // Accessing method from Labrador

    return 0;
}

