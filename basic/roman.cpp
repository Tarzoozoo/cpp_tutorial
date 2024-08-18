#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // สร้าง function สำหรับแปลงตัวอักษร Romanji
  int romanValue(char r) {
    switch (r) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
    }
    return -1; // ถ้าไม่เข้าเคสไหนเลยให้ return -1 เป็น fallback ไป
  }
    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++){
            int current = romanValue(s[i]);
            int next_value = 0;
            if (i+1 < s.length()){
                next_value = romanValue(s[i+1]);
            }
            if (current < next_value){
                sum -= current;
            }
            else if (current >= next_value){
                sum += current;
            }
        }
    return sum;
    }
};

int main(){
    Solution s;
    string input = "III";
    
    int re = s.romanToInt(input);
    cout << re << "\n";
    return 0;
}