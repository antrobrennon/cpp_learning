#include <iostream>
using namespace std;

int check_fibonacci(int current, int next, int n){
    if(n == 0) return current;
    int total = current + next;

    return check_fibonacci(next, total, n-1);
}

int main() {
    int n;
    cin >> n;

    cout << check_fibonacci(0, 1, n);
}   