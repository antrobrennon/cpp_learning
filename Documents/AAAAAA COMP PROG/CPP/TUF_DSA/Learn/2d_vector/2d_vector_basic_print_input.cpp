#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Get Input
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> vec (rows,vector<int>(cols));


    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            cin >> vec[i][j];
        }
    }


    //Print function

    cout << "The output is :" << endl;
    // for(int i = 0 ; i < rows ; i++){
    //     for(int j = 0 ; j < cols ; j++){
    //         cout << vec[i][j] << " ";
    //     }
    //     cout << '\n';
    // }

    for(auto& row : vec){
        for(auto& col : row){
            cout << col << " ";
        }
        cout << endl;
    }

    // Sample testcase

    // 3 4
    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12

}