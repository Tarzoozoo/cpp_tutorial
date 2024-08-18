#include <iostream>
using namespace std;

// ส่วนใหญ่จะใช้ตอนเขียน Algorithm
// Callback func = การที่เราส่ง func ในฐานะ parameter
// ให้กับ function อื่น เพื่อจะได้จัดการด้วยวิธีการที่ต่างกัน
// โดยขึ้้นอยู่กับ function callback ที่เราส่งไป

// Callback function that squares a number
void square(int n) { cout << n * n << " "; }

// Callback function that doubles a number
void doubleNumber(int n) { cout << n * 2 << " "; }

// Function that takes an array, its size, and a callback function as parameters
// It applies the callback function to each element of the array
void processArray(int *array, int size, void (*callback)(int)) {
  for (int i = 0; i < size; ++i) {
    callback(array[i]); // Calling the callback function on each array element
  }
  cout << endl; // End the line after processing the array
}

int main() {
  int myArray[] = {1, 2, 3, 4, 5};
  int size = sizeof(myArray) / sizeof(myArray[0]);

  cout << "Squaring array elements: ";
  processArray(myArray, size,
               square); // Pass the 'square' function as a callback

  cout << "Doubling array elements: ";
  processArray(myArray, size,
               doubleNumber); // Pass the 'doubleNumber' function as a callback

  return 0;
}