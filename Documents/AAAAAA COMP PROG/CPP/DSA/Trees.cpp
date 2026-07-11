// trees are data are stored in cerat in heirarchy.

// graph-> data is not connected in certain heirarchy unlike trees.

// BinaryTrees;
// A node can have macimum of two child.

//     Root Node->1st Node is created.
//     Leaf Node-> last created Node, from this new nodes can still be created.
//     child Node-> A Node that is connected to a root node or another child node.
//     Sibling Node-> If a Node is sharing same parent Node.
//     Cousin Node-> If two nodes have parents that are siblings.


//     * A Leaf Node can be both Leaf Node and child Node and also can be a parent node.


//     Level Order:
            // If the input is 
            // 1, 2, 3, 4, 5, 6, 7

            //       1
            //     /   
            //    2     3
            //   / \   / 
            //  4   5 6   7

        //     Here (2, 4, 5) and (3,6,7) are family.

        //     The Filling always happens from left->right.
        // There are three ways to Print a Tree:
        // I)Inorder
        // II)Preorder
        // III)PostOrder

        // RECURSION:
        // recursions -> dont have pending statements;
        // backtracking -> have pending statements;

        // Recursion -> parameters can be passed of own desire unlike loops.
        // Base conditon -> both recursion and loops terminate when they meet the base consition.




// #include <iostream>
// #include <queue>
// using namespace std;

// class node
// {
//     public:
//         node* left;
//         node* right;
//         int data;

//     node(int data){
//         this->data =data;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// void inorder(node* root)
//     {
//         if(root == nullptr)
//         {
//             return;
//         }
//         else
//         {
//             inorder(root->left);
//             cout << root->data;
//             inorder(root->right);
//         }
//     }

// int main()
// {
//     node* root = nullptr;
//     queue<node*> q;

//     int n;
//     cin >> n;

//     node* nn = new node(n);
//     root = nn;
//     q.push(root);

//     while(!q.empty())
//     {
//         node* r = q.front();
//         q.pop();
//         cin >> n;

//         if(r->left == nullptr && n != -1)
//         {
//             r->left = new node(n);
//             q.push(r->left);
//         }

//         cin >> n;
        
//         if(r->right == nullptr && n != -1)
//         {
//             r->right = new node(n);
//             q.push(r->right);

//         }
//     }
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

//     node(int d)
//     {
//         data = d;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// void dis(node* head) {
//     if(head == nullptr) return;

//     dis(head->left);
//     cout << head->data << " ";
//     dis(head->right);
// }

// int main() 
// {
//     queue <node*> q;
//     int x;

//     cin >> x;
//     if(x == -1) return 0;

//     node* head = new node(x);
//     q.push(head);

//     while(!q.empty())
//     {
//         node* root = q.front();
//         q.pop();

//         cin >> x;
//         if(x == -1) 
//             break;
//             root->left = new node(x);
//             q.push(root->left);
//         cin >> x;
//         if(x == -1) 
//             break;
//             root->right = new node(x);
//             q.push(root->right);
//     }
//     dis(head);
// }


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

// void leaf_Node(node* root){
//     if(root == nullptr) return;
//     else{
//         leaf_Node(root->left);
//         leaf_Node(root->right);
//     }
    
//     if(root->left == nullptr && root->right == nullptr)
//     {
//         cout << root->data << " ";
//     }
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
//         node* root = q.front();
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
//     leaf_Node(root);
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

// int sum_of_nodes(node* root)
// {
//     if(root == nullptr) return 0;
//     else{
//         return root->data + sum_of_nodes(root->left) + sum_of_nodes(root->right);
//     }
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
//         node* root = q.front();
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
//     cout << sum_of_nodes(root) << endl;
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

// int height (node* root){
//     int lf;
//     int rf;
//     if(root == nullptr){
//         return - 1;
//     }
//     else{
//         lf = height(root->left);
//         rf = height(root->right); 
//     }
//     return (max(lf,rf)+1);
// }


// int main(){
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
//         node* root = q.front();
//         q.pop();

//         cin >> n;

//         if(n == -1) break;

//         if(n != 0 && root->left == nullptr)
//         {
//             root->left =  new node(n);
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
//         cout << height(root);  
// }



// BINARY SEACH TREE:
    // we comapare elements unlike binary search.
    // If the space is empty i can create a node;
  
    
    // insertion used level order filling;

    // It is very helpful in searching and sorting no need for traversing the whole tree;

    // we use queue in binary trees beacuse insertion happens in level order but in binary search tree it wont happen in level order it is just which element comes below which element;
    

// To print all the element of inputs

// #include <iostream>
// using namespace std;

// class node
// {
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


// node* insert(node* root, int n)
// {
//     if(root == nullptr)
//     {
//         node* nn = new node(n);
//         return nn;
//     }
//     else
//     {
//         if(root->data > n) root->left = insert(root->left, n);
//         else root->right = insert(root->right, n);
//     }
//     return root;
// }

// void preorder(node* root)
// {   
//     if(root == nullptr) return;
//     else{
//         cout << root->data << " ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// int main()
// {
//     node* root = nullptr;

//     int n;
//     cin >> n;

//     node* nn = new node(n);
//     root = nn;

//     while(true)
//     {
//         cin >> n;

//         if(n == -1) break;
//         else insert(root,n);
//     }

//     preorder(root);
    
// }

//  #include <iostream>
//  #include <queue>
//  using namespace std;

//  class node
//  {
//     public:
//         int data;
//         node* left;
//         node* right;

//         node(int data)
//         {
//             this->data = data;
//             this->left = nullptr;
//             this->right = nullptr;
//         }
//  };

// node* insert(node* root, int n)
// {
//     if(root == nullptr){
//         node* nn = new node(n);
//         return nn;
//     }
//     else root->right = insert(root->right, n);
//     return root;
// }


// void levelorder(node* root)
// {
//     if(root == nullptr) return;

//     queue<node*> q;
//     q.push(root);

//     while(!q.empty()){
//         node* curr = q.front();
//         q.pop();

//         cout << curr->data << " ";

//         if(curr->left != nullptr) q.push(curr->left);
//         if(curr->right != nullptr) q.push(curr->right);
//     }
// }

//  int main()
//  {
//     node* root = nullptr;

//     int n;
//     cin >> n;
//     root = new node(n);

//     while(true){
//         cin >> n;
//         if(n == -1) break;
//         else root = insert(root, n);
//     }
//     levelorder(root);
//  }


//Search element in the binary tree:

// #include <iostream>
// #include <queue>
// using namespace std;

// class node{
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

// node* insert(node* root, int n)
// {
//     if(root == nullptr)
//     {
//         node* nn = new node(n);
//         return nn;
//     }
//     else root->right = insert(root->right,n);
//     return root;
// }

// bool search(node* root, int s)
// {
//     if(root == nullptr) return false;

//     if(root->data == s) return true;
//     else return search(root->left,s) ||search(root->right,s);
// }
// int main()
// {
//     node* root = nullptr;

//     int s;
//     cin >> s;

//     int n;
//     cin >> n;

//     root = new node(n);

//     while(true)
//     {
//         cin >> n;
//         if(n == -1) break;
//         else root = insert(root,n);
//     }
//     cout << search(root, s);
//     return 0;
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
        left = right = nullptr;
    }
};

node* insert(node* root, int n)
{
    if(root == nullptr)
        return new node(n);

    root->right = insert(root->right, n);
    return root;
}

bool search(node* root, int s)
{
    if(root == nullptr) return false;
    if(root->data == s) return true;

    return search(root->left, s) || search(root->right, s);
}

int main()
{
    node* root = nullptr;

    int searchValue;
    cin >> searchValue;

    int n;
    cin >> n;   // number of nodes

    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    cout << search(root, searchValue);

    return 0;
}