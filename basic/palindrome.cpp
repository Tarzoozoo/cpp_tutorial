#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if ( x >= 0 && x <= 9){
            cout << "C" << "\n";
            return true;
        }
        else if (x < 0){
            cout << "A" << "\n";
            return false;
        }
        else if (x % 10 == 0){
            cout << "B" << "\n";
            return false;
        }

        else{
            cout << "D" << "\n";
            int new_x = 0;
            int loop_x = x;
            while (loop_x > new_x){
                new_x = new_x * 10;
                new_x = new_x + (loop_x % 10);
                loop_x = loop_x / 10;
            }
            cout << loop_x << " " << new_x/10 << "\n";
            if ((loop_x == new_x) || (loop_x == (new_x / 10))){
                // Palindrome
                return true;
            }
            else {
                // Palindrome
                return false;
            } 
        }
    }
};

int main(){
    Solution s;
    int input = 0;
    
    bool re = s.isPalindrome(input);
    cout << "result: " << re << endl;
    return 0;
}