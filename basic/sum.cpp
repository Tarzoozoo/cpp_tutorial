#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x, y;
        x = y = 0;
        cout << "Num: " << nums.size() << "\n";
        for(int i = 0; i < nums.size(); i++){
            x = nums[i];
            for(int j = 1; j < nums.size(); j++){
                y = nums[j];
                if ((nums[i] + nums[j]) == target){
                    return {x, y};
                }
            }
        }
    }
};

int main(){
    Solution s;
    vector<int> input = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> re = s.twoSum(input, target);
    cout << re.size() << endl;
    for (int i = 0; i < re.size(); i++){
        cout << re[i] << endl;
    }
    return 0;
}