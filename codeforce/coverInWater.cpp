#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool is_three = false;
        int count = 0;
        for(char c : s){
            if(c == '.'){
                count++;
            }
        }

        for(int i = 1 ; i < n-1 ; i++){
            if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
                is_three = true;
            }
        }

        if(is_three){
            cout << 2 << "\n";
        } else {
            cout << count << "\n";
        }
    }
    
}