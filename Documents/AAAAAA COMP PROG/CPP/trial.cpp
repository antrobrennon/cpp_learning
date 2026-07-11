// #include <iostream>
// using namespace std;


// class node {
//     public:
//         int data;
//         node* next;

//     node(int data){
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// class LL {
//     public:
//         node* head;
//         node* temp;

//     LL(){
//         head = nullptr;
//         temp = nullptr;
//     }

//     void insert(int n){
//         node* nn = new node(n);
    
//         if(head == nullptr){
//             head = nn;
//             temp = nn;
//         }else{
//             temp->next = nn;
//             temp = nn;
//         }
//     }

//     void print() {
//         temp = head;

//         while(temp != nullptr)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//     }
// };

// int main()
// {
//     bool istrue = true;

//     LL l;
//     int n;

//     while(istrue){
//         cin >> n;
//         if(n == -1)
//         {
//             istrue = false;
//             break;
//         }
//         else 
//         {
//             l.insert(n);
//         }

//         l.print();
//     }
//     return 0;
// }


//  #include <iostream>0
//  using namespace std;

//  int main()
//  {
//     int n;
//     cin >> n; 

//     int arr[n];
//     for(int i = 0 ; i < n ; i++)
//     {
//         cin >> arr[i];
//         cout << &arr[i] << endl;
//     }
//     return 0;
//  }

// #include <iostream>
// #include <vector>
// using namespace std;

// pair<int, int> findMaxMin(vector<int>& arr) {
//     int maximum = arr[0];
//     int minimum = arr[0];
//     for (int element : arr) {
//         if (element > maximum) {
//             maximum = element;
//         }
//         if (element < minimum) {
//             minimum = element;
//         }
//     }
//     return {maximum, minimum};
// }

// int main() {
//     vector<int> temperatures = {32, 28, 35, 41, 29, 38, 33};
//     int maxTemp, minTemp;
//     lexicographical_compare[maxTemp, minTemp] = findMaxMin(temperatures);
//     cout << "Max: " << maxTemp << ", Min: " << minTemp << endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> findMax(vector<int> numbers, int toFind)
// {
//     vector<int> Match;
//     for(int i = 0 ; i < (int)numbers.size() ; i++)
//     {
//         if(numbers[i] == toFind)
//         {
//             Match.push_back(i);
//         }
//     }
//     return Match;
// }

// int main()
// {
//     int toFind = 6;
//     vector<int> numbers = {6, 6, 3, 6, 5, 6};
//     vector<int> results = findMax(numbers, toFind);

//     for(int i = 0 ; i < (int)results.size() ; i++)
//     {
//         cout << results[i] << " ";
//     }
// }















// #include <iostream>
// using namespace std;

// int main(){
//     int vertex, edges;
//     cin >> vertex >> edges;

//     int arr[vertex+1][vertex+1];
//     for(int i = 0 ; i < vertex+1 ; i++){
//         for(int j = 0 ; j < vertex+1 ; j++){
//             arr[i][j] = 0;
//         }
//     }

//     for(int i = 0 ; i < edges ; i++){
//             int v1, v2, weight;
//             cin >> v1 >> v2 >> weight;

//             arr[v1][v2] = weight;
//             arr[v2][v1] = weight;
//     }

//     for(int i = 0 ; i < vertex+1; i++){
//         for(int j = 0 ; j < vertex+1 ; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }




// #include <iostream>
// #include <queue>
// using namespace std;

// class node {
//     public:
//         int data;
//         node* left;
//         node* right;

//     node(int data){
//         this->data = data;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// int height1(node* root){
//     int lf;
//     int rf;

//     if(root == nullptr) return -1;
    
//     lf = height1(root->left);
//     rf = height1(root->right);

//     return (max(lf,rf)+1);
// }

// int main(){
//     queue<node*> q;
//     node* root = nullptr;

//     int n;
//     cin >> n;

//     node* head = new node(n);
//     root = head;
//     q.push(head);
    
//     while(!q.empty()){
    
//         node* root =  q.front();
//         q.pop(); 

//         cin >> n;

//         if(n == -1) break;

//         if(n != 0 && root->left == nullptr){
//             root->left = new node(n);
//             q.push(root->left);
//         }

//         cin >> n;

//         if(n == -1) break;

//         if(n != 0 && root->right == nullptr){
//             root->right = new node(n);
//             q.push(root->right);
//         }
//     }
//     cout << height1(root);

// }


#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int height(node* root){
    int lf;
    int rf;

    if(root == nullptr) return -1;

    lf = height(root->left);
    rf = height(root->right);
    return (max(lf,rf)+1);
}

int main(){
    queue <node*> q;
    node* root = nullptr;

    int n;
    cin >> n;

    if(n == -1) return 0;
    
    node* head = new node(n);
    root = head;
    q.push(head);

    while(!q.empty()){
        node* root = q.front();
        q.pop();

        cin >> n;

        if(n == -1) break;

        if(n != 0 && root->left == nullptr){
            root->left = new node(n);
            q.push(root->left);
        }

        cin >> n;

        if(n == -1) break;

        if(n != 0 && root->right == nullptr){
            root->right = new node(n);
            q.push(root->right);
        }
    }
        cout << height(root);

}