#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // string longestCommonPrefix(vector<string>& strs) {
    //     string prefix = "";
    //     for (int i = 0; i < strs.size(); i++){
    //         for (int j = 0; j < strs[i].size(); j++){
    //             if ((strs[i][j] == strs[i+1][j]) && (strs[i][j] == strs[i+2][j])){
    //                 prefix += strs[i][j];
    //             }
    //             else{
    //                 break;
    //             }
    //         }
    //     }
    //     return prefix;
    // }
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for (int i = 0; i < strs[i].size(); i++){
            char check = strs[0][i];
            for (int j = 1; j < strs.size(); j++){
                if (check != strs[j][i]){
                    return prefix;
                }
            }
            prefix += check;
        }
        return prefix;
    }
};

int main(){
    Solution s;
    vector<string> input = {"flower","flow","flight"};
    
    string re = s.longestCommonPrefix(input);
    cout << re << "\n";
    return 0;
}