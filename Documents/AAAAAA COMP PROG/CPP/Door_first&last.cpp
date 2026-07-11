#include <iostream>
using namespace std;

int main(){
    int number;
    int count = 0;
    cin >> number;
    int dup = number;
    int var;
// To find the size of the number
    while(dup != 0){
        var = dup % 10;
        dup = dup / 10;
        count++;
    }

    cout << count;
    return 0;
}