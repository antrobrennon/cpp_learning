#include <iostream>
using namespace std;

int main() {
    // int n, count = 0, count2 = 0;
    // cin >> n;
    // int array[n], array2[n];
    // for(int i = 0 ; i < n ; i++){
    //     cin >> array[i];
    //     if(array[i] == 0){
    //         count++;
    //     }
    // }
    // for(int i = 0 ; i < n ; i++){
    //     if(array[i] != 0){
    //         if(array2[i] != 0){
    //             array2[count2] = array[i];
    //             cout << array2[i];
    //             count2++;
    //         }else{
    //             cout << 0;
    //         }
    //         }
    // }
    int n;
    cin >> n;
    int array[n], count = 0, count2 = 0, array2[n];
    for(int i = 0 ; i < n ; i++){
        cin >> array[i];
        if(array[i] == 0){
            count++;
        }else{
            array2[count2] = array[i];
            count2++;
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(i < count2){
            cout << array2[i] << " ";
        }else{
            cout << 0 << " ";
        }
    }
}