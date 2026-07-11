#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n], arr2[n];
    int count = 0;
    for(int i = 0 ; i < n ; i++ )
    {
        cin >> arr[count];
    if(arr[i] != arr[i-1])
    {
        arr2[count] = arr[i];
        cout << arr2[count];
    }        
    }

    return 0;
}