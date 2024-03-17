#include <iostream>
#include <bitset>

// Function to demonstrate initializing, setting, resetting, and flipping bits
void bitManipulation() {
    std::bitset<8> bits("00110011");
    std::cout << "Original bits: " << bits << std::endl;

    bits.set(3); // Set the 4th bit
    std::cout << "After setting bit 3: " << bits << std::endl;

    bits.reset(7); // Reset the 8th bit
    std::cout << "After resetting bit 7: " << bits << std::endl;

    bits.flip(2); // Flip the 3rd bit
    std::cout << "After flipping bit 2: " << bits << std::endl;

    bool isSet = bits.test(5); // Check if the 6th bit is set
    std::cout << "Bit 5 is set? " << isSet << std::endl;
}

// Function to demonstrate bitwise operations
void bitwiseOperations() {
    std::bitset<8> a("00110011");
    std::bitset<8> b("11001100");

    std::bitset<8> result = a & b; // Bitwise AND
    std::cout << "a & b = " << result << std::endl;

    result = a | b; // Bitwise OR
    std::cout << "a | b = " << result << std::endl;

    result = a ^ b; // Bitwise XOR
    std::cout << "a ^ b = " << result << std::endl;

    result = ~a; // Bitwise NOT (complement)
    std::cout << "~a = " << result << std::endl;

    result = a << 2; // Left shift by 2 bits
    std::cout << "a << 2 = " << result << std::endl;

    result = b >> 3; // Right shift by 3 bits
    std::cout << "b >> 3 = " << result << std::endl;
}

// Function to demonstrate counting set bits (popcount)
void countSetBits() {
    std::bitset<8> bits("10101010");
    int count = bits.count(); // Count the number of set bits
    std::cout << "Number of set bits: " << count << std::endl;
}

int main() {
    bitManipulation();
    std::cout << std::endl;
    bitwiseOperations();
    std::cout << std::endl;
    countSetBits();

    return 0;
}

