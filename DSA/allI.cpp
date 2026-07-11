// #include <iostream>
// #include <queue>
// using namespace std;

// class node {
// public:
//     node* left;
//     node* right;
//     int data;

//     node(int data) {
//         this->data = data;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// void inorder(node* root) {
//     if(root == nullptr) {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void preorder(node* root) {
//     if(root == nullptr) {
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void postorder(node* root) {
//     if(root == nullptr) {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main() {
//     node* root = nullptr;
//     queue<node*> q;

//     int n;
//     cin >> n;

//     if(n == -1) return 0;

//     node* nn = new node(n);
//     root = nn;
//     q.push(root);

//     while(!q.empty()) {
//         node* r = q.front();
//         q.pop();


//         if(!(cin >> n) || n == -1) break;
//         r->left = new node(n);
//         q.push(r->left);


//         if(!(cin >> n) || n == -1) break;
//         r->right = new node(n);
//         q.push(r->right);
//     }

//     cout << "Inorder: ";
//     inorder(root);
//     cout << endl;

//     cout << "Preorder: ";
//     preorder(root);
//     cout << endl;

//     cout << "Postorder: ";
//     postorder(root);
//     cout << endl;
// }


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* left;
//     node* right;

//     node(int data) {
//         this->data = data;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// node* insert(node* root, int data) {
//     if(root == nullptr) {
//         return new node(data);
//     }
//     if(data < root->data) {
//         root->left = insert(root->left, data);
//     } else {
//         root->right = insert(root->right, data);
//     }
//     return root;
// }

// void inorder(node* root) {
//     if(root == nullptr) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void preorder(node* root) {
//     if(root == nullptr) return;
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void postorder(node* root) {
//     if(root == nullptr) return;
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main() {
//     node* root = nullptr;

//     int n;
//     cin >> n;

//     node* nn = new node(n);
//     root = nn;

//     while(true) {
//         cin >> n;

//         if(n == -1) break;
//         else insert(root, n);
//     }

//     cout << "Inorder: ";
//     inorder(root);
//     cout << endl;

//     cout << "Preorder: ";
//     preorder(root);
//     cout << endl;

//     cout << "Postorder: ";
//     postorder(root);
//     cout << endl;

//     return 0;
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
//         this->right = nullptr;
//         this->left = nullptr;
//     }
// };

// node* insert(node* root, int data){
//     if(root == nullptr){
//         return new node(data);
//     }
//     if(root->data > data){
//     root->left = insert(root->left,data);
//     } else {
//         root->right = insert(root->right,data);
//     }
//     return root;
// }

// void preorder(node* root){
//     if(root == nullptr) return;
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);   
// }

// void inorder(node* root){
//     if(root == nullptr) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void postorder(node* root){
//     if(root == nullptr) return;
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main(){
//     node* root = nullptr;

//     int data;
//     cin >> data;

//     root = new node(data);

//     while(true){
//         cin >> data;

//         if(data == -1)break;
//         else insert(root, data);
//     }

//     inorder(root);
//     cout << endl;
//     preorder(root);
//     cout << endl;
//     postorder(root);
//     cout << endl;
// }

// Min Heap & Max Heap

// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     priority_queue<int, vector<int>, greater<int>> pq;

//     int n;
//     cin >> n;

//     for(int i = 0 ; i < n ; i++){
//         int num;
//         cin >> num;
//         pq.push(num);
//     }

//     while(!pq.empty()){
//         cout << pq.top() << " ";
//         pq.pop();
//     }
// }


// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     priority_queue<int, vector<int>, greater<int>> pq;

//     int n;
//     cin >> n;
    
//     for(int i = 0 ; i < n ; i++){
//         int num;
//         cin >> num;
//         pq.push(num);
//     }

//     while(!pq.empty()){
//         cout << pq.top() << " ";
//         pq.pop();
//     }
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

void inorder(node* root){
    if(root == nullptr) return;
    else{
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
        }
}
void preorder(node* root){
    if(root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void leaf_Node(node* root){
    if(root == nullptr) return;

    leaf_Node(root->left);
    leaf_Node(root->right);

    if(root->left == nullptr && root->right == nullptr){
        cout << root->data << " ";
    }
}
int main(){
    queue<node*> q;

    int n;
    cin >> n;

    if(n == -1) return 0;

    node* root = new node(n);
    q.push(root);

    while(!q.empty()){
        node* root = q.front();
        q.pop();
        cin >> n;

        if(n == -1) break;
        root->left = new node(n);
        q.push(root->left);

        cin >> n;

        if(n == -1) break;
        root->right = new node(n);
        q.push(root->right);
    }
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    leaf_Node(root);
}