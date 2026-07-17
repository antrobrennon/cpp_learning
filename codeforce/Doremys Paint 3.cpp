#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        unordered_map<int,int> mp;
        for(int i = 0 ; i < n ; i++){
            int val;
            cin >> val;

            mp[val]++;
        }

        if(mp.size() > 2){
            cout << "No" << endl;
        }else if(mp.size() == 1) {
            cout << "Yes" << endl;
        }else{
            int count = 0;
            int f1, f2;
            for(const auto& pair : mp){
                if(count == 0){
                    f1 = pair.second;
                    count++;
                }else{
                    f2 = pair.second;
                }
            }

            if(f1 == f2 || f1 == f2-1 || f1 == f2+1){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
}