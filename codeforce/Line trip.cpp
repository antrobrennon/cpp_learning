#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;

    while(t-- && t >= 0){
        int n, dis;
        cin >> n >> dis;
        vector<int> bunks(n);
        for(int i = 0 ; i < n ; i++){
            int val;
            cin >> val;
            bunks[i] = val;
        }

        int prev = 0;
        int maxi = -1;
        for(int i = 0 ; i < n ; i++){
            maxi = max((bunks[i]-prev), maxi);
            prev = bunks[i];
        }
        maxi = max(2*(dis - prev),maxi);
        cout << maxi << endl;
    }

}