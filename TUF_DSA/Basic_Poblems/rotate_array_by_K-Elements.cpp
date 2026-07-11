#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        k %= nums.size();
        int left = 0 ; 
        int right = k-1;

        while(left < right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }

        left = k;
        right = nums.size()-1;
        while(left < right) {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }

        left = 0;
        right = nums.size()-1;
        while(left < right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
};

int main() {
    Solution ret;

    int n, k;
    cin >> n >> k;

    vector<int> nums;

    for(int i = 0 ; i < n ; i++) {
        int val;
        cin >> val;

        nums.push_back(val);
    }

    
    ret.rotateArray(nums, k);

    for(int i = 0 ; i < n ; i++) {
        cout << nums[i] << " ";
    }

} // 3 4 1 5 3 -5