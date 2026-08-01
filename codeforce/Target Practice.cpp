#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        char arr[10][10];
        int point = 0;
        for(int i = 0 ;i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                cin >> arr[i][j];

                if(arr[i][j] == 'X'){
                    if(i == 0 || 0 == 10-i-1 || j == 0 || 0 == 10-j-1){
                        point++;
                    }else if(i == 1 || 1 == 10-i-1 || j == 1 || 1 == 10-j-1){
                        point += 2;
                    }else if(i == 2 || 2 == 10-i-1 || j == 2 || 2 == 10-j-1){
                        point += 3;
                    }else if(i == 3 || 3 == 10-i-1 || j == 3 || 3 == 10-j-1){
                        point += 4;
                    }else if(i == 4 || 4 == 10-i-1 || j == 4 || 4 == 10-j-1){
                        point += 5;
                    }
                }
            }
        }
        cout << point << endl;
    }
}
