#include <iostream>

// Template class for a generic container
template <typename T>
class Container {
private:
    T value;
public:
    Container(T val) : value(val) {}
    T getValue() { return value; }
};

// Template specialization for the Container class with type double
template <>
class Container<double> {
private:
    double value;
public:
    Container(double val) : value(val) {}
    double getValue() { return value * 2; }  // Double the value for doubles
};

int main() {
    Container<int> intContainer(42);
    Container<double> doubleContainer(3.14);

    std::cout << "Value in int container: " << intContainer.getValue() << std::endl;
    std::cout << "Value in double container: " << doubleContainer.getValue() << std::endl;

    return 0;
}

