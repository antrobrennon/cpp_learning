#include<iostream>
using namespace std;

bool palindrome(string word, int n, int i){
    if(i >= n/2) return true;
    if((word[i] != word[n-i-1])) return false;
    else return palindrome(word, n, i+1);
}
int main(){
    string word;
    getline(cin,word);
    int len = word.length();
    cout << palindrome(word, len, 0);
}