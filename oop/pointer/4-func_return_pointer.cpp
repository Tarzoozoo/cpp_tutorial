#include <iostream>
using namespace std;

int* createArray(int size){
    
    // ---------------- Example 1 ----------------
    int* arr = new int[size]; // Dynamically allocate memory for the array
    // เมื่อจบ function createArray
    // arr จะไม่หายไป เพราะใช้ new
    // memmory ที่จองไว้จะไม่หายไป
    
    // Initialize the array
    for (int i = 0; i < size; i++){
        arr[i] = i * 2; // Example initailization: store of index
        // cout << arr << "\n";
    }
    return arr; // Return address of first index 
                // to the dynamically allocated array


    // ---------------- Example 2 ----------------
    int arr2[] = {};
    int* ptr = arr2;
    // Initialize the array
    for (int j = 0; j < size; j++){
        ptr[j] = j * 2; // Example initailization: store of index
        // cout << ptr[i] << "\n";
    }
}

int main(){
    int size = 5;
    int *myArray = createArray(size);

    // Print the array elements
    cout << "Array elements: ";
    for (int i = 0; i < size; i++){
        cout << myArray[i] << " ";
    }
    cout << "\n";

    delete[] myArray; // Delete the dynamically allocated array 
                      // to aviod memory leak
}