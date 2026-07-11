#include <iostream>
#include <vector>
using namespace std;

void recursiveBubbleSort(vector<int>& arr, int n){
    if(n == 1) return;

    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
            count++;
        }
    }

    if(count == 0) return;

    recursiveBubbleSort(arr,n);
}

int main(){
    int n; cin >> n;
    vector<int> vec;
    int val;

    for(int i = 0 ; i < n ; i++){
        cin >> val;
        vec.push_back(val);
    }

    recursiveBubbleSort(vec,vec.size());

    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << " ";
    }
}