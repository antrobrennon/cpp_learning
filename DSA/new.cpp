// #include<iostream>
// #include<queue>
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
// void preorder (node* root){
//     if(root == nullptr){
//         return;
//     }
//     else{
//         cout<<root->data<<" ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// int main(){ 
//     queue <node*> q;

//     node* root = nullptr;

//     int n;
//     cin>>n;

//     if(n == -1) return 0;

//     node* head = new node(n);
//     root = head;
//     q.push(head);

//     while(!q.empty()){
//         node* root = q.front();
//         q.pop();
        
//         cin>>n;
//         if(n == -1) break;

//         if(n!=0 && root->left == nullptr ){
//             root->left = new node(n);
//             q.push(root->left);
//         }
        
        
//         cin>>n;
//         if(n == -1) break;

//         if(n != 0 && root->right == nullptr ){
//             root->right = new node(n);
//             q.push(root->right);
//         }  
//     }
//     preorder(root);
// }


// #include <iostream>
// #include <queue>
// using namespace std;

// class node
// {
//     public:
//         int data;
//         node* left;
//         node* right;

//     node(int data)
//     {
//         this->data = data;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// void postorder(node* root){
//     if(root == nullptr) return;

//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }
// int main()
// {
//     queue<node*> q;
//     node* root = nullptr;

//     int n;
//     cin >> n;

//     if(n == -1) return 0;

//     node* head = new node(n);
//     root = head;
//     q.push(head);

//     while(!q.empty())
//     {
//        node* root = q.front();
//         q.pop();

//         cin >> n;
//         if(n == -1) break;

//         if(n != 0 && root->left == nullptr)
//         {
//             root->left = new node(n);
//             q.push(root->left);
//         }

//         cin >> n;

//         if(n == -1) break;

//         if(n != 0 && root->right == nullptr)
//         {
//             root->right = new node(n);
//             q.push(root->right);
//         }
//     }
//     postorder(root);
// }

#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    node* left;
    node* right;
    int data;
    node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};
node* insert(node* root ,int n){
    if(root == nullptr){
        node* nn = new node(n);
        return nn;
    }else{
        if(root->data > n){
            root->left = insert(root->left,n);
        }
        else{
            root->right = insert(root->right,n);
        }
    }
    return root;
}
void levelorder (node* root){
    if(root == nullptr){
        return;
    }
    queue <node*> q;
    q.push(root);
    while(!q.empty()){
        node* current = q.front();
        q.pop();
        cout<<current->data;
        if(current->left !=  nullptr){
            q.push(current->left);
        }
        if(current->right != nullptr){
            q.push(current->right);
        }
    }
}
int main(){
    node* root = nullptr;
    int n;

    cin >> n;
    root = new node(n);

    while(true){
        cin >> n;
        if(n == -1){
            break;
        }
        else{
            root = insert(root, n);
        }
    }

    levelorder(root);
}