#include <iostream>
using namespace std;

int main() 
{
    int n, s;
    cin >> n >> s;
    
    int left = 0, right = n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    while(left <= right)
    {
        int mid = (left + right)/2;
        if(arr[mid] == s){
            cout << "element found at:" << mid;
            return 0;
        }else if( arr[mid] < s){
            left = mid;
        }else{
            right = mid;
        }
    }
}