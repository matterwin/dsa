#include <iostream>

// Class template for a simple generic container
template <typename T>
class Container {
private:
    T value;
public:
    Container(T val) : value(val) {}
    T getValue() { return value; }
};

int main() {
    Container<int> intContainer(42);
    Container<double> doubleContainer(3.14);

    std::cout << "Value in int container: " << intContainer.getValue() << std::endl;
    std::cout << "Value in double container: " << doubleContainer.getValue() << std::endl;

    return 0;
}

