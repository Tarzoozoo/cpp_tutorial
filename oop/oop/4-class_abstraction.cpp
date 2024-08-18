#include <cmath>
#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual double calculateArea() const = 0; //// No implementation, must be overridden
    virtual ~Shape() {} // Virtual destructor for safe polymorphic use
};

// Derived class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return M_PI * radius *radius; // Implementation for circle
    }
};

// Another derived class
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width; // Implementation for rectangle
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(10, 20);
    cout << "Circle area: " << circle.calculateArea() << endl;
    cout << "Rectangle area: " << rectangle.calculateArea() << endl;
    return 0;
}
