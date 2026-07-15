#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int val;
        cin >> val;

        cout << (val%3 ? "First" : "Second") << endl;
    }
}