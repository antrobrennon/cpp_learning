// #include <iostream>
// using namespace std;

// int main() {
//     int max1 = 0, max2 = 0, n;
//     cin >> n;
//     int array[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> array[i];
//         if(array[i] > max1){
//             max2 = max1;
//             max1 = array[i];
//         }
//         if(array[i] > max2 && array[i] < max1){
//             max2 = array[i];
//         }
//     }

//     cout << max2;
// }



#include <iostream>
#include <climits>
using namespace std;

int findSecondMax(int orders[], int n) {
    // Start your solution 
    
    int firstMax = 0, secMax = 0, inb;
    for(int i = 0 ; i < n ; i++){
        if(secMax < orders[i]){
            secMax = orders[i];
            
            if(firstMax < secMax){
                secMax = inb;
                secMax = firstMax;
                firstMax = secMax;
        }
        if(orders[i] > firstMax){
            firstMax = orders[i];
        }
        }
        
    }
    return secMax;
    
    // End your solution 
}

int main() {
    int n;
    cin >> n;
    
    int orders[1000];
    for (int i = 0; i < n; i++) {
        cin >> orders[i];
    }
    
    cout << findSecondMax(orders, n) << endl;
    
    return 0;
}