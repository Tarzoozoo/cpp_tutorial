#include <iostream>
using namespace std;

// Define a struct to represent a point in 2D space
struct Point {
    int x;
    int y;
};

int main() {
    // Dynamically allocate a new Point
    // สร้าง pointer ชื่อ pPoint ให้ทำการจองพื้นที่สำหรับประเภท struct Point
    Point *pPoint = new Point;

    // Access and modify the Point's fields through the pointer
    // (->) จะใช้เมื่อใช้กับ struct ที่เป็น pointer 
    pPoint->x = 10;
    pPoint->y = 20;

    // Print the Point's coordinates
    cout << "The point is at (" << pPoint->x << ", " << pPoint->y << ")"
            << endl;

    // Don't forget to free the dynamically allocated memory
    delete pPoint;

    return 0;
}