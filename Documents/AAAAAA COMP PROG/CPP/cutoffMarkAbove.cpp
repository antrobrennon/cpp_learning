#include <iostream>
using namespace std;

int main() {
    int n, cutoff, count = 0;
    cin >> n >> cutoff;
    int array[n];
    for(int i = 0 ; i < n ; i++){
        cin >> array[i];
        if(array[i] > cutoff){
            count++;
        }
    }
    cout << count;
}