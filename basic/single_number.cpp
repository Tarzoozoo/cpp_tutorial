#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // int singleNumber(vector<int>& nums) {
    //     if (nums.size() == 1){
    //         return nums[0];
    //     }
    //     else{
    //         for (int i = 0; i < nums.size(); i ++){
    //             int x = nums[i];
    //             bool is_single = true;
    //             for (int j = 0; j < nums.size(); j++){
    //                 int y = nums[j];
    //                 if (i != j && x == y){
    //                     is_single = false;
    //                     break;
    //                 }
    //             }
    //             if (is_single){
    //                 return x;
    //             }
    //         }
    //     }
    //     return 0;
    // }
    int singleNumber(vector<int>& nums) {
        int xor1=0;

        for(int i=0;i<nums.size();i++){
            cout << xor1 << " " << nums[i] << "\n";
            xor1=xor1^nums[i];
            cout << xor1 << "\n";
        }

        return xor1;
    }
};

int main(){
    Solution s;
    // vector<int> input = {4, 1, 2, 1, 2};
    // vector<int> input = {2, 2, 1};
    // vector<int> input = {1};
    vector<int> input = {1, 3, 1, -1, 3};
    
    int re = s.singleNumber(input);
    cout << re << "\n";
    return 0;
}