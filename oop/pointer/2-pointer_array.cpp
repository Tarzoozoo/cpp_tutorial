#include <iostream>

using namespace std;

int main(){
    // ---------------- Example 1 ----------------
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    int length = sizeof(arr)/sizeof(arr[0]);

    cout << length << "\n";

    for (int i = 0; i < length; i++){
        cout << "value: " << *(ptr + i) << "\n";
    }
    cout << "\n";

    // ---------------- Example 2 ----------------
    int arr3[5] = {1, 2, 3, 4, 5};
    int* ptr3 = arr3; // ptr ชี้ไปที่ arr[0]

    // เข้าถึงค่าของ arr[0] ผ่าน ptr
    cout << *ptr3 << endl; // 1
    cout << *(ptr3 + 4) << endl; // 5
    cout << ptr3[4] << endl; // 5
}
