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
    int left = 0, right = 0;
    int sum = arr[0], count = 1, maxi = 0;


    while(left < right){
        sum += arr[right];
        count++;

        if(sum == target){
            maxi = max(count,maxi);
        }else if(sum > target){
            sum -= arr[left];
            left++;
            count--;
        }else{

        }
    }
}