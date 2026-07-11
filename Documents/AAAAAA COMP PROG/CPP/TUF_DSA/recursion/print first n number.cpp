#include <iostream>
using namespace std;

void recursivefn(int n){
    if(n == 0) return; 

    recursivefn(n-1);
    
    cout << n << endl;

}


int main(){
    int n;
    cin >> n;

    recursivefn(n);
}