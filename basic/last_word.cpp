#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        cout << s.length() << "\n";
        int count = 0;
        char space = ' ';
        bool found_char = false;
        for (int i = s.length()-1; i >= 0; i--){
            if (s[i] != space){
                found_char = true;
                count += 1;
            }
            else if (s[i] == space && found_char == true){
                break;
            }
        }
        return count;
    }
};

int main(){
    Solution s;
    string input = "aa ";
    
    int re = s.lengthOfLastWord(input);
    cout << re << "\n";
    return 0;
}