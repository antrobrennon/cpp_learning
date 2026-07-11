#include <iostream>
using namespace std;

int function(int prime[], int n){
    if(n <= 1) return 0;
    if(prime[n] == 1) return n;

    return function(prime,n-1);
}

int main(){
    int n;
    cin >> n;

    int prime[n+1];
    for(int i = 0 ; i <= n+1 ; i++){
        prime[i] = 1;
        prime[0] = 0;
        prime[1] = 0;
    }
    
    for(int i = 2 ; i <= n ; i++){
        if(prime[i] == 1){
            for(int j = i*i ; j <= n ; j+=i){
                prime[j] = 0;
            }
        }
    }

    cout << function(prime,n);
    
} 