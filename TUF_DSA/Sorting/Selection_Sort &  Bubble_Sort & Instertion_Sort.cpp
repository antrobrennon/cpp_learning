#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr, int n){
    //Find the minium each round and swap them.
        //i)we assume the first index to have the smallest value
        //ii)the inner loop iterate and find the least value at the end
        //iii)Once the inner loop ends we swap the current index and the minimum
        
        //Time Complexity: At worst case it take O(n^2)
        for(int i = 0 ; i < n-1 ; i++){
        int mini = i;
        for(int j = i+1 ; j < n ; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }                      
        }
        swap(arr[i],arr[mini]); 
    }
}
void bubbleSort(vector<int>& arr, int n){
    
    for(int i = n-1 ; i >= 0 ; i--){
        int prev = 0;
        bool isSort = false;
        for(int j = 1 ; j <= i ; j++){
            if(arr[prev] > arr[j]) {
                swap(arr[j],arr[prev]);
                isSort =  true;
            }
            prev = j;
        }
        if(!isSort) break;
    }
}
void instertionSort(vector<int>& arr, int n){
    for(int i = 1 ; i < n ; i++){
        int j = i;
        while((j >= 1) && (arr[j] < arr[j-1])){
            swap(arr[j], arr[j-1]);
            j--;
        }
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

    // selectionSort(arr,n);
    //bubbleSort(arr,n);
    instertionSort(arr,n);
    //Print

    
    cout << "{";
    for(int i = 0 ; i < n ; i++){
        cout << arr[i];
        if(i != n-1) cout << ", ";
    }
    cout << "}";
}