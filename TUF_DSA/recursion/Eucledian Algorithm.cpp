#include <iostream>
using namespace std;

int function(int a, int b){
    if(b == 0) return a;

    return function(b, a%b);
}
int main(){
    int a, b;
    cin >> a >> b;

    cout << function(a,b);
}