#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Setter methods to set the name and age
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    // Getter methods to retrieve the name and age
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

int main() {
    Person person;
    
    // Set the name and age using setter methods
    person.setName("John Doe");
    person.setAge(30);
    
    // Retrieve and print the name and age using getter methods
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;

    return 0;
}

