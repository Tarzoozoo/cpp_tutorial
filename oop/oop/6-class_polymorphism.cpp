#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() const { cout << "Drawing a shape" << endl; }
    virtual ~Shape() {} // Virtual destructor for safe polymorphic deletion
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() const override { // Override base class method
    cout << "Drawing a circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() const override { // Override base class method
    cout << "Drawing a rectangle" << endl;
    }
};

void drawShape(const Shape *shape) {
    // รับ circle, rectangle ในฐานะ shape
    shape->draw(); // Polymorphic call
    // สามารถ draw circle, rectangle ได้ ภายใต้ class Shape
}

int main() {
    Circle circle;
    Rectangle rectangle;

    drawShape(&circle);    // Calls Circle's draw
    drawShape(&rectangle); // Calls Rectangle's draw

  return 0;
}