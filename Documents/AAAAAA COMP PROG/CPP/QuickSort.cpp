#include <bits/stdc++.h>
using namespace std;

int partition(int left, int right, vector<int>& arr){
    int pivot = arr[left];
    int i = left;
    int j = right;

    while(i < j){
        while(arr[i] <= pivot && i <= right){
            i++;
        }
        while(arr[j] > pivot && j >= left){
            j--;
        }
        if(i < j) swap(arr[i],arr[j]);
    }
    swap(arr[left],arr[j]);
    return j;
}
void qs(int left, int right, vector<int>&arr){
    if(left < right){
        int pIndex = partition(left,right,arr);

        qs(left, pIndex -1, arr);
        qs(pIndex+1, right, arr);
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0 ; i < n ; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }

    qs(0, n-1, arr);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}