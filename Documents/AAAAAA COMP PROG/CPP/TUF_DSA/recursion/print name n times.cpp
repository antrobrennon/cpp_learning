#include <iostream>
using namespace std;
int cnt = 5;

void print_name(string name){
    cout << cnt << " : " << name << endl;
    cnt--;

    if(cnt == 0) return;
    print_name(name);
}
int main(){
    string name;
    getline(cin,name);

    cout << "The name is: " << endl;

    print_name(name);
}