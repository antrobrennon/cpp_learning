#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector<vector<int>> FrequencyCountTechnique(vector<int> arr){
    int n = arr.size();

    vector<vector<int>> ans;
    vector<bool> visited(n,false);
    for(int i = 0 ; i < n ; i++){
        if(visited[i] == true)  continue;

        int count = 1;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        ans.push_back({arr[i],count});
    }
    return ans;
}
int main(){
    vector<int> arr;
    int num;
    while (cin >> num){
        if(num == -1) break;

        arr.push_back(num);
    }

    vector<vector<int>> ans = FrequencyCountTechnique(arr);

    for(const auto& pair : ans){
        cout << "The frequency of " << pair[0]<< " is " << pair[1] << "\n"; 
    }
}