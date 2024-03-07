#include <iostream>

// Base class
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

// Derived class
class Rectangle: public Shape {
public:
    int getArea() {
        return (width * height);
    }
};

int main() {
    Rectangle rect;

    // Set dimensions
    rect.setWidth(5);
    rect.setHeight(7);

    // Print area
    std::cout << "Area of Rectangle: " << rect.getArea() << std::endl;

    return 0;
}

