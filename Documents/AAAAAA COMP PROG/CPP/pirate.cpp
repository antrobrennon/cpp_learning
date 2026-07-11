// 729 65
#include <iostream>
using namespace std;

int main() {
    int total_coins;
    int long_Ben;
    int blackbeard;
    cin >> total_coins >> long_Ben >> blackbeard;
    int c1 = (total_coins * long_Ben)/100;
    int c2 = ((total_coins - c1) * blackbeard)/100;
    int per_for_remaining = (total_coins - c1 - c2)/3;
    int thrown_in_sea = (total_coins - c1 - c2 - (3*per_for_remaining));
    cout << c1 << endl;
    cout << c2 << endl;
    cout << per_for_remaining << endl;
    cout << thrown_in_sea;
    
    return 0;
}