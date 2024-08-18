#include <iostream>

using namespace std;

void myFunction(int a) {
  // Function implementation
  cout << "Number: " << a << "\n";
}
int main(){
    void (*functionPtr)(int) = myFunction; // Pointer to a function that takes an int and returns void
    functionPtr(1);
    return 0;
}
