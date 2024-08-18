#include <iostream>
using namespace std;

// Define a struct to represent a point in 2D space
struct Point {
    int x;
    int y;
};

int main() {

    // ------------- Struct ปกติ ------------- 
// - เมื่อเราสร้าง instance ของ struct ชื่อ Point ขึ้นมา 
// พื้นที่จะถูกจัดสรรให้บน stack (stack เป็นพื้นที่หน่วยความจำแบบพิเศษที่ทำงานคล้ายๆกองของที่เรียงกัน
// โดยข้อมูลล่าสุดที่ใส่เข้าไปจะอยู่บนสุด และเป็นข้อมูลแรกที่ถูกดึงออกไป)
// - สำหรับ struct ทั่วไป compiler จะทำการจัดการหน่วยความจำสำหรับ instance 
// ที่อยู่บน stack โดยอัตโนมัติ และหน่วยความจำจะถูกปล่อยออกมาเมื่อตัวแปรนั้นหลุดออกจาก scope ไป
// - สมาชิกของ struct สามารถเข้าถึงได้โดยตรงโดยใช้ตัวดำเนินการจุด (.)
// - การกำหนดค่าของ instance struct หนึ่ง ไปให้กับอีก instance หนึ่งจะเป็นการคัดลอกค่าของ
// สมาชิกแต่ละตัวโดยตรง ซึ่งวิธีนี้เรียกว่า shallow copy (สำเนาข้อมูลทั้งหมด)

    Point pt;
    pt.x = 10;
    pt.y = 20;

    Point pt2 = pt; // Copy
    pt2.x = 30;
    cout << "pt.x: " << pt.x << endl;
    cout << "pt2.x: " << pt2.x << endl;

    // ------------- Struct pointer ------------- 
// - เมื่อเราใช้ pointer ชี้ไปยัง struct ชื่อ Point และจัดสรรพื้นที่ด้วยคำสั่ง new 
// หน่วยความจำสำหรับโครงสร้างนั้นจะถูกจัดสรรอยู่บน heap
// - เราต้องรับผิดชอบในการจัดการหน่วยความจำที่ถูกจัดสรรบน heap ด้วยตัวเอง 
// โดยจะต้องปล่อยหน่วยความจำอย่างชัดเจนด้วยคำสั่ง delete เพื่อหลีกเลี่ยงปัญหา memory leak
// - สมาชิกของ struct จะถูกเข้าถึงผ่าน pointer โดยใช้ตัวดำเนินการลูกศร (->)
// - วิธีนี้ทำให้สามารถจัดสรรหน่วยความจำแบบ dynamic ได้ ซึ่งเปิดโอกาสให้สร้าง data structure 
// ตอนจังหวะ application runtime ได้ หรือ สามารถเรียกใช้จากนอก scope ได้
// - เราสามารถใช้ pointer arithmetic ได้ โดยการส่ง pointer ไปยัง function 
// เพื่อแก้ไขข้อมูลต้นฉบับได้ (pass by reference) หรืออาจมี pointer หลายตัวชี้ไปยัง 
// instance ตัวเดียวกันได้

    Point *pPt = new Point;
    pPt->x = 10;
    pPt->y = 20;

    Point *pPt2 = pPt; // Both pointers refer to the same memory location
    pPt2->x = 30;
    cout << "pPt->x: " << pPt->x << endl;
    cout << "pPt2->x: " << pPt2->x << endl;

    return 0;
}