#include <iostream>
#include <string>

class Shape {
public:
    // Pure virtual function to calculate area
    virtual double calculateArea() const = 0;
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea() const override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle rectangle(5, 10);
    Circle circle(7);

    // Calculate and print the area of the rectangle
    std::cout << "Area of rectangle: " << rectangle.calculateArea() << std::endl;

    // Calculate and print the area of the circle
    std::cout << "Area of circle: " << circle.calculateArea() << std::endl;

    return 0;
}

