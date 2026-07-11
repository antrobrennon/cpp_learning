#include <iostream>
using namespace std;

int i = 0;

void fn (int i,int n){
    if(n < i) return;

    fn(i+1,n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;

    fn(i,n);
}