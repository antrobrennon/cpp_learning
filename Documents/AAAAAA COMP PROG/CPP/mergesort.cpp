#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while((left <= mid) && (right <= high)){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i-low];
    }
}
void mergeSort(vector<int>& arr, int left, int right){
    if(left >= right) return;

    int mid = (left + right)/2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

int main(){
    int n ;
    cin >> n;

    vector<int> arr;
    for(int i = 0 ; i < n ; i++){
        int val;
        cin >> val;

        arr.push_back(val);
    }

    mergeSort(arr,0,arr.size()-1);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}