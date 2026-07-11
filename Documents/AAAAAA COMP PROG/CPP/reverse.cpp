#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;  
    int reverse = 0, div; 

    while(n != 0){
        div = n % 10;
        reverse = reverse * 10 + div;
        n = n/10;
    }
    cout << reverse;
}