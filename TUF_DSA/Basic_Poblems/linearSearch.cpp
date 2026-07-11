#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution ret;
    

    int n, target;
    cin >> n >> target; 

    vector<int> nums;

    for(int i = 0 ; i < n ; i++) {
        int val;
        cin >> val;

        nums.push_back(val);
    }

    
    cout << ret.linearSearch(nums, target);

    // 5 6
    // 2 -4 4 0 10

    // 5 3
    // 2 3 4 5 3
}