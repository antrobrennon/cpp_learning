#include <iostream>
using namespace std;

int main() {
        int dollar = 0;
        int cents = 0;
        int myNum[5];

    for(int i = 0 ; i < 4 ; i++){
        cin >> myNum[i];
    }

    for(int i = 0 ; i < 4 ; i++){
        if(i % 2 == 0){
            dollar += myNum[i];
        }else{
            cents += myNum[i];
        }
    }
        int Check = cents/100;

        if(Check != 0){
            dollar += Check;
            cents = cents % 100;
            cout << "dollars =" << dollar << endl;
            cout << "cents =" << cents;
        }else{
            cout << "dollars =" << dollar << endl;
            cout << "cents =" << cents ;
        }
    return 0;
}



