// #include <iostream>
// #include <stack>
// using namespace std;

// int evaluatePostFix(string exp){
//     stack<int> st;

//     for(char c : exp){
//         if(isdigit(c)){
//             st.push(c - '0');
//         }else{
//             int val2 = st.top(); st.pop();
//             int val1 = st.top(); st.pop();

//             switch(c){
//                 case '+': st.push(val1+val2); break;
//                 case '-': st.push(val1-val2); break;
//                 case '*': st.push(val1*val2); break;
//                 case '/': st.push(val1/val2); break;

//             }
//         }
//     }
//     return st.top();
// }

// int main(){
//     string searchvalue;
//     cin >> searchvalue;

//     cout << evaluatePostFix(searchvalue) ;
//     return 0;
// }


// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     int v, e;
//     cin >> v >> e;

//     int arr[v+1][v+1];

//     for(int i = 1 ; i <= v ; i++){
//         for(int j = 1 ; j <= v ; j++){
//             arr[i][j] = 0;    
//         }
//     }

//     for(int i = 0 ; i < e ; i++){
//         int v1, v2;
//         cin >> v1 >> v2;
//         arr[v1][v2] = 1;
//         arr[v2][v1] = 1;
//     }

//     bool vis[v+1] = {false};
//     queue<int> q;

//     for(int start = 1 ; start <= v ; start++){
//         if(!vis[start]){
//             vis[start] = true;
//             q.push(start);

//             while(!q.empty()){
//                 int t = q.front();
//                 q.pop();

//                 cout << t << " ";


//                 for(int i = 1 ; i <= v ; i++){
//                     if(arr[t][i] == 1 && !vis[i]){
//                         vis[i] = true;
//                         q.push(i);
//                     }
//                 }
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// class node{
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

// class list{
//     public:
//         node* head = nullptr;
//         node* temp = nullptr;


//     node* insert(node* root, int n){

//         if(root == nullptr){
//             return new node(n);
//         }
//             root->right = insert(root->right,n);
//             return root;
//     }


//     bool search(node* root, int n){
//         if(root == nullptr) return false;
//         if(root->data == n) return true;

//         return search(root->right, n) || search(root->left,n); 
//     }
// };

// int main(){
//     node* root = nullptr;

//     list l;

//     int n;
//     cin >> n;

//     for(int i = 0 ; i <  n ; i++){
//         int elemenets;
//         cin >> elemenets;

//         root = l.insert(root,elemenets);
//     }
//     int search;
//     cin >> search;

//     cout << l.search(root, search);
// }

#include <iostream>
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

class list {
    public:
        node* head = nullptr;
        node* temp = nullptr;

        void insert(int n){
            node* nn = new node(n);

            if(head == nullptr){
                head = nn;
                temp = nn;
            }else{
                nn->left = temp;
                temp->right = nn;
                temp = nn;
            }
        }

        void printbackward(){
            while(temp != nullptr){
                cout << temp->data << " ";
                temp = temp -> left;
            }
        }
};
int main(){
    int n;
    cin >> n;

    list l;

    for(int i = 0 ; i < n ; i++){
        int elements;
        cin >> elements;

        l.insert(elements);
    }
    l.printbackward();
}





#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;

    int n, value;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> value;
        pq.push(value);
    }

    if(pq.empty()) {
        cout << "Heap is empty";
        return 0;
    }

    cout << "Minimum Element: " << pq.top() << endl;

    cout << "Elements in ascending order: ";
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}