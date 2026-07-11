#include <iostream>
using namespace std;

int factorial(int n, int fact){
    if(n == 0)return fact;

    else{
        fact *= n-1;
        return factorial(n-1,fact);
    }
}

int main(){
    int n, fact = 1;
    cin >> n;

    cout << factorial(n,fact);
}