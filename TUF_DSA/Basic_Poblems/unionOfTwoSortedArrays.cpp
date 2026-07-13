#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;

        for(int i = 0 ; i < nums1.size() ; i++)
            s.insert(nums1[i]);
        
        for(int i = 0 ; i < nums2.size() ; i++)
            s.insert(nums2[i]);

        vector<int> res;
        for(auto i : s)
            res.push_back(i);

        return res;
    }
};

int main(){
    Solution obj1;

    int n;
    cin >> n;

    vector<int> arr1(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr1[i];
    }
     
    int m;
    cin >> m;
    
    vector<int> arr2(m);

    for(int j = 0 ; j < m ; j++){
        cin >> arr2[j];
    }

    vector<int> result = obj1.unionArray(arr1, arr2);

    for(int i = 0 ; i < result.size() ; i++){
        cout << result[i] << " "; 
    }

}