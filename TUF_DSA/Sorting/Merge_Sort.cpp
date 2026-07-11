#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

void merge(int low, int high, int mid){
    vector<int>temp;
    int left = low;
    int right = mid+1;

    while(left <= right && right <= high){
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
        arr[i] = temp[i - low];
    }
}

void mergeSort(int left, int right){
    if(left >= right) return;

    int mid = (left + right)/2;

    mergeSort(left,mid);
    mergeSort(mid+1,right);
    merge(left,right,mid);
}

int main(){
    //Get Input
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        int val;
        cin >> val;

        arr.push_back(val);
    }

    mergeSort(0,arr.size());


    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}