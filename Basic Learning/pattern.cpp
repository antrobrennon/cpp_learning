// #include <iostream>
// using namespace std;

// int main() {
//     int number, var = 20;
//     cin >> number;
//     int  check = number;
//     for(int i = 1 ; i <= 4 ; i++){
//         for(int ){
            
//         }
//         for(int j = 1 ; j <= 4 ; j++ ){
//                 cout <<  j << "*";
//         }
//         for(int k = 4 ; k >= 1 ; k++){
//             var = var - k;
//             cout << var - k - i << "*"; 
//         }
//     }
// }


#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i-1; j++){
            cout << " ";
        }
        for(int k = 0 ; k < 2*i+1 ; k++){
            cout << "*";
        }
         for(int j = 0 ; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern2(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }
        for(int k = 0 ; k < 2*n-(2*i+1) ; k++){
            cout << "*";
        }
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i-1; j++){
            cout << " ";
        }
        for(int k = 0 ; k < 2*i+1 ; k++){
            cout << "*";
        }
         for(int j = 0 ; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }
        for(int k = 0 ; k < 2*n-(2*i+1) ; k++){
            cout << "*";
        }
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern4(int n){
    for(int i = 0 ; i < 2*n ; i++){
        int stars = i;
        if(i > n) stars = (2*n)-i-1;
            for(int j = 0 ; j <= stars ; j++){
                cout << "*";
            }
        cout << endl;
    }
}
void pattern5(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            if(i%2 == 0){
                if(j%2 == 0) cout << 1 << " ";
                else cout << 0 << " ";
            }else{
                if(j%2 == 0) cout << 0 << " ";
                else cout << 1 << " ";
            }
        }
        cout << endl;
    }
}
void pattern6(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << j;
        }
        for(int j = 1 ; j <= 2*(n-i) ; j++){
            cout << " ";
        }
        for(int j = i ; j >= 1 ; j--){
            cout << j ; 
        }
        cout << endl;
    }
}
void pattern7(int n){
    int count = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << count << " ";
            count++;
    }
    cout << endl;
    }
}
void pattern8(int n){
    for(int i = 1 ; i < n ; i++){
        for(char j = 'A' ; j <= 'A' + i ; j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern9(int n){
    for(int i = n-1 ; i >= 0 ; i--){
        for(char j = 'A' ; j <= 'A' + i ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern10(int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << char ('A' + i);
       }
       cout << endl;
    }
}
void pattern11(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j =  0; j <= n-i ; j++){
            cout << " ";
        }

        char ch = 'A';
        int shouldbreak = (2*i +1)/2;

        for(int j = 0 ; j < (2*i) + 1; j++){
            cout << ch;
            
            if(j < shouldbreak) ch ++;
            else ch--;
        }

        cout << endl;
    }
}
void pattern12(int n){
    for(int i = 0 ; i < n ; i++){
        char ch = 'E' - i;

        for(int j = 0 ; j <= i ; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void pattern19(int n){

    for(int i = 0 ; i <= 2*i ; i++){
        if(i <= n){
            for(int j = 0 ; j <= n-i ; j++){
                cout << "*";
            }
            for(int j = 1 ; j <= 2*i ; j++){
                cout << " ";
            }
            for(int j = 0 ; j <= n-i ; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
        for(int i = 0 ; i <= n ; i++){
            for(int j = 0 ; j <= i ; j++){
                cout << "*";
            }
            for(int j = 1 ; j <= 2*(n-i) ; j++){
                cout << " ";
            }
            for(int j = 0 ; j <= i ; j++){
                cout << "*";
            }
            cout << endl;
        }
    
}
void pattern20(int n){
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < 2*(n-i) ; j++){
            cout << " ";
        }
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int j = 1 ; j <= n ; j++){
        for(int i = 0 ; i <= n-j ; i++){
            cout << "*";
        }
        for(int i = 0 ; i < 2*j ; i++){
            cout << " ";
        }
        for (int i = 0 ; i <= n-j ; i++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern21(int n){
    for(int i = 0 ; i < n ; i++){
        if(i == 0 || i == n-1){
            for(int j = 0 ; j < n ; j++){
            cout << "*";
            }
        }else{
            for(int j = 0 ; j < n ; j++){
                if(j == 0 || j == n-1){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }
        cout << endl << endl;
    }
}
void pattern22(int n){
    
}

int main(){
    int n;
    cin >> n;

    pattern21(n);
}