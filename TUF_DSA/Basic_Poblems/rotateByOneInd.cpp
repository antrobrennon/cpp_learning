#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int val = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            swap(nums[i-1], nums[i]);
        }
        nums[nums.size()-1] = val;
    }
};

int main(){
    Solution obj1;
    int n;
    cin >> n;

    vector<int> arr;
    for(int i = 0 ; i < n ; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }

    obj1.rotateArrayByOne(arr);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}