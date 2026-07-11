
// To find the left and right side by keeping the mid point and deciding

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n], leftCount = 0, rightCount = 0;
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }

//     if(n%2 == 1){
//     for(int i = 0 ; i < n/2 ; i++){
//         if(i < n/2){
//             leftCount += arr[i];
//         }
//         if(n-(i+1) > n/2 ){
//             rightCount += arr[n-(i+1)];
//         }
//     }
//     }else {
//         return -1;
//     }

//     if(leftCount == rightCount){
//         cout << "equal";
//     }else{
//         cout << "Not equal";
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){

//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     bool isSame = false;
//     int arr[n], leftCount = 0, rightCount = 0;
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }

//     for(int j = 0 ; j < n ; j++){
//         for(int i = 0 ; i < j ; i++){
//             if(i < j){
//                 leftCount += arr[i];
//             }if(n-(1+i) > j ){
//                 rightCount += arr[n-(i+1)];
//             }
            
//         }
//         if(leftCount == rightCount){
//             isSame = true;
//             break;
//         }else{
//             leftCount = 0;
//             rightCount = 0;
//         }
//     }

//     if(isSame == true){
//         cout << "same";
//     }else{
//         cout << "Not same";
//     }
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int 
// }