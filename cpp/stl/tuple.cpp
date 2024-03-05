#include <iostream>
#include <tuple>

int main() {
    // Creating a tuple of integer, double, and string
    std::tuple<int, double, std::string> tuple1(5, 3.14, "world");

    // Accessing elements of the tuple
    std::cout << "First element of tuple1: " << std::get<0>(tuple1) << std::endl;
    std::cout << "Second element of tuple1: " << std::get<1>(tuple1) << std::endl;
    std::cout << "Third element of tuple1: " << std::get<2>(tuple1) << std::endl;

    // Modifying elements of the tuple
    std::get<0>(tuple1) = 10;
    std::get<1>(tuple1) = 2.718;
    std::get<2>(tuple1) = "hello";

    std::cout << "Modified first element of tuple1: " << std::get<0>(tuple1) << std::endl;
    std::cout << "Modified second element of tuple1: " << std::get<1>(tuple1) << std::endl;
    std::cout << "Modified third element of tuple1: " << std::get<2>(tuple1) << std::endl;

    // Creating a tuple with std::make_tuple function
    auto tuple2 = std::make_tuple(42, 3.14, "world");

    // Accessing elements of the tuple
    std::cout << "First element of tuple2: " << std::get<0>(tuple2) << std::endl;
    std::cout << "Second element of tuple2: " << std::get<1>(tuple2) << std::endl;
    std::cout << "Third element of tuple2: " << std::get<2>(tuple2) << std::endl;

    return 0;
}

