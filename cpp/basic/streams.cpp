#include <iostream>
#include <fstream> // for file streams

int main() {
    // Output stream: cout (console output)
    std::cout << "Hello, world!" << std::endl;

    // Input stream: cin (console input)
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;

    // File output stream: ofstream
    std::ofstream outFile("output.txt");
    if (outFile.is_open()) {
        outFile << "This is written to a file." << std::endl;
        outFile.close();
    } else {
        std::cerr << "Error: Unable to open file." << std::endl;
    }

    // File input stream: ifstream
    std::ifstream inFile("input.txt");
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << "Read from file: " << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Error: Unable to open file." << std::endl;
    }

    return 0;
}

