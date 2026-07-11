#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int l1 = nums1.size()-1, l2 = nums2.size()-1;
        int i = 0, j = 0 ; 
        int result = INT_MIN;
        vector<int> results;


        while(i <= l1 && j <= l2){
            if(nums1[i] < nums2[j] && nums1[i] != result){
                results.push_back(nums1[i]);
                result = nums1[i];
                i++;
            }
            else if(nums2[j] < nums1[i] && nums2[j] != result){
                results.push_back(nums2[j]);
                result = nums2[j];
                j++;
            }
            else if(nums1[i] == nums2[j] && nums1[i] != result){
                results.push_back(nums1[i]);
                result = nums1[i];
                i++; j++;
            }
            else {
                if(nums1[i] < nums2[j] && nums1[i] == result) i++;
                if(nums2[j] < nums1[i] && nums2[j] == result) j++;
                if(nums1[i] == nums2[j] && nums1[j] == result)i++ ; j++;
            }

        }
        while(i <= l1) {results.push_back(nums1[i]); i++;}
        while(j <= l2) {results.push_back(nums2[j]); j++;}
        return results;
    }
};

int main(){
    Solution obj1;

    int n, m ;
    cin >> n >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);

    for(int i = 0 ; i < n ; i++){
        cin >> arr1[i];
    }

    for(int j = 0 ; j < m ; j++){
        cin >> arr2[j];
    }

    vector<int> result = obj1.unionArray(arr1, arr2);

    for(int i = 0 ; i < result.size() ; i++){
        cout << result[i] << " "; 
    }

}