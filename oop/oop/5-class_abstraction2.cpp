#include <iostream>
using namespace std;

class Base {
public:
  virtual void show() const { // Virtual function
    cout << "Base show" << endl;
  }
  virtual ~Base() {} // Virtual destructor
};

class Derived : public Base {
public:
  void show() const override { // Override the base class function
    cout << "Derived show" << endl;
  }
};

void callShow(const Base &obj) {
  obj.show(); // Dynamic binding happens here
}

int main() {
  Base base;
  Derived derived;

  callShow(base);    // Calls Base::show
  callShow(derived); // Calls Derived::show, thanks to dynamic binding

  return 0;
}