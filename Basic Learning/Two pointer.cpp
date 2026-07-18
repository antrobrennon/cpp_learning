#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;

    for(int i = 0 ; i < arr.size() ; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    int target;
    cin >> target;
    int left = 0, right = arr.size()-1;
    sort(arr.begin(), arr.end());

    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target){
            cout << "True" << endl;
            return 0;
        }else if(sum > target){
            right--;
        }else{
            left++;
        }
    }
    cout << "There is no pair of sum equal to the target" << endl;
}