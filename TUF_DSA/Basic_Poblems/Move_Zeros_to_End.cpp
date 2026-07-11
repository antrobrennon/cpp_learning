#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int count = 1;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }else {
                count++;
            }
        }
        for(int i = nums.size() - count + 1; i < nums.size() ; i++) {
            nums[i] = 0;
        }
    }
};

int main() {
    Solution ret;


    int n;
    cin >> n; 

    vector<int> nums;

    for(int i = 0 ; i < n ; i++) {
        int val;
        cin >> val;

        nums.push_back(val);
    }

    
    ret.moveZeroes(nums);

    for(int i = 0 ; i < n ; i++) {
        cout << nums[i] << " ";
    }
    // 6
    // 0 0 0 1 3 -2

    // 6
    // 0 1 4 0 5 2
    
}