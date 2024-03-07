#include <iostream>

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() const {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Override the makeSound function
    void makeSound() const override {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Override the makeSound function
    void makeSound() const override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    // Declare objects of base and derived classes
    Animal *animal1 = new Animal();
    Animal *animal2 = new Dog();
    Animal *animal3 = new Cat();

    // Call the makeSound function on each object
    animal1->makeSound(); // Output: Animal makes a sound
    animal2->makeSound(); // Output: Dog barks
    animal3->makeSound(); // Output: Cat meows

    // Clean up memory
    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}

