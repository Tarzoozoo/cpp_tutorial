#include <iostream>

using namespace std;
// Pass by reference 1
// Input of this fuction is pointer, so pass its address --> addNumbers(&num1, &num2);
void addNumbers(int* a, int* b){
    cout << "address a: " << a << "\n";
    cout << "value a: " << *a << "\n";  
    cout << "address b: " << b << "\n";
    cout << "value b: " << *b << "\n";
    *a = *a + *b;
}

// Pass by reference 2
// Input is address, so pass its value -->  addNumbers2(num1, num2);
void addNumbers2(int &c, int &d){
    cout << "address c: " << &c << "\n";
    cout << "value c: " << c << "\n";  
    cout << "address d: " << &d << "\n";
    cout << "value d: " << d << "\n";
    c = c + d;
}

int main(){
    // ---------------- Test fucntions taking pointers as arguments ----------------
    int num1 = 10, num2 = 20;
    cout << "address num1: " << &num1 << "\n";
    cout << "value num1: " << num1 << "\n";  
    cout << "address num2: " << &num2 << "\n";
    cout << "value num2: " << num2 << "\n";
    cout << "Add numbers func" << "\n";
    addNumbers(&num1, &num2);
    cout << "Final output of addNumbers: " << num1 << "\n";
    cout << "\n";
    cout << "\n";

    addNumbers2(num1, num2);
    cout << "Final output of addNumbers2: " << num1 << "\n";

    cout << "\n";
    cout << "\n";

    // ---------------- Test declearation of pointer Concept ----------------
    int num3 = 90;
    int* ptr = &num3; 
    int &add_num3 = num3;
    cout << "address num3: " << &num3 << "\n";
    cout << "address num3: " << ptr << "\n";
    cout << "address num3: " << &add_num3<< "\n";
    cout << "value num3: " << * ptr << "\n";  
    cout << "value num3: " << add_num3 << "\n";
}
