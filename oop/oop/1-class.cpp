#include <iostream>
#include <string>
using namespace std;

class Person {
public: // Access specifier
    // Attributes
    string name;
    int age;

    // Constructor
    Person(string n, int a) : name(n), age(a) {
    // name = n;
    // age = a;
    }

    // Method
    void greet() const {
    cout << "Hello, my name is " << name << " and I am " << age
                << " years old." << endl;
    }
};

int main() {
    // Creating an object/instance of the Person class
    Person person1("Alice", 30);

    // Calling a method of the object
    person1.greet();

    cout << person1.name << endl; // Public
    return 0;
}