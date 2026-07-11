#include <iostream>
using namespace std;

int main() {
    // int treeRow, treeCol;
    // cin >> treeRow >> treeCol;
    // int n, m;
    // cin >> n >> m;
    //     int matrix[n][m];
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < m ; j++){
    //         cin >> matrix[i][j];
    //     }
    // }
    
    // if(treeCol == 0 || treeCol == 2){
    //     cout << "Mango Tree";
    // }else{
    //     cout << "Banana Tree";
    // }

    int row, column, treeNo;
    cin >> row >> column >> treeNo;

    if(treeNo % column == 0){
        cout << "Mango tree";
    }else if(treeNo % column == 1){
        cout << "Mango tree";
    }else if (treeNo >= column){
        cout << "Mango tree";
    }else{
        cout << "Banana tree";
    }

}