#include <iostream>
using namespace std;

int gcd(int a, int b){
    return gcd(b,a%b);
}

int helper(int arr[], int dp[], int n){
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            if(gcd(arr[i],arr[j] > 1)) dp[i] = max(dp[i],dp[j] + 1);
        }
        int m = dp[0];
        for(int i = 1 ; i < n ; i++){
            if(dp[i] > m) m = dp[i];
        }
        return m;
    }
}