#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        bool check = false;

        for(int i = 0 ;i < n ; i++){
            int val;
            cin >> val;
            
            if(val == k){
                check = true;
            }
        }

        if(check){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}