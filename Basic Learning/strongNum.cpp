#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int no = n;
    int rem = 0, mult = 1, sum = 0;
    while(n != 0){
        mult = 1;
        rem = n % 10;
        for(int i = 1 ; i <= rem ; i++){
            mult *= i;
        }
        sum += mult;
        n = n / 10;
    }

    if(sum == no){
        cout << "Strong Number";
    }else{
        cout << "Not a Strong Number";
    }
}