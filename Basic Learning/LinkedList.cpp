// #include <iostream>
// using1 4r$$ namespace std;

// class node {
//     public:
//         int data;
//         node* next;
//         node(int data)
//         {
//             this -> data = data;
//             this -> next = nullptr;
//         }
// };

// class LL{
//     public:
//         node* head;
//         node* temp;

//         LL()
//         {
//             head = nullptr;
//             temp = nullptr;
//         }

//     void insert(int n){
//         node* nn = new node(n);

//         if(head == nullptr){
//             head = nn ; 
//             temp = nn;
//         }
//         else{
//             temp->next = nn;
//             temp = nn;
//         }
//     }

//     void print(){
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
//         if(n == -1){
//             istrue = false;
//             break;
//         }else{
//             l.insert(n);   
//         }

//     }
//         l.print();  
    
// }

    
// To find the alternative elements and print them . We use an additional next in the print function

// #include <iostream>
// using namespace std;


// class node {
//     public:
//         int data;
//         node* next;
//         node(int data)
//         {
//             this -> data = data;
//             this -> next = nullptr;
//         }
// };

// class LL{
//     public:
//         node* head;
//         node* temp;

//         LL()
//         {
//             head = nullptr;
//             temp = nullptr;
//         }

//     void insert(int n){
//         node* nn = new node(n);

//         if(head == nullptr){
//             head = nn ; 
//             temp = nn;
//         }
//         else{
//             temp->next = nn;
//             temp = nn;
//         }
//     }

//     void print(){
//         temp = head;

//         while(temp != nullptr)
//         {
//             cout << temp->data << " ";
//             temp = temp->next->next;
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
//         if(n == -1){
//             istrue = false;
//             break;
//         }else{
//             l.insert(n);   
//         }

//     }
//         l.print();  
    
// }



    // Deleting a node (specially 1st) has a method
        // method for deleting first node = during the print statement the head temp is equal to head->next whiich skips the first element .
        //                     or
        // we can also create a function delete where which can be called when necessary


// #include <iostream>
// using namespace std;


// class node {
//     public:
//         int data;
//         node* next;
//         node(int data)
//         {
//             this -> data = data;
//             this -> next = nullptr;
//         }
// };

// class LL{
//     public:
//         node* head;
//         node* temp;

//         LL()
//         {
//             head = nullptr;
//             temp = nullptr;
//         }

//     void insert(int n){
//         node* nn = new node(n);

//         if(head == nullptr){
//             head = nn; 
//             temp = nn;
//         }
//         else{
//             temp->next = nn;
//             temp = nn;
//         }
//     }

//     void print(){
//         // temp = head->next;
//             temp = head;
//         while(temp != nullptr)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//     }
//     void del(){
//         head = head->next;
//     }

// };

// int main()
// {
//     bool istrue = true;
    
//     LL l;
//     int n;

//     while(istrue){
//         cin >> n;
//         if(n == -1){
//             istrue = false;
//             break;
//         }else{
//             l.insert(n);   
//         }

//     }
//         l.print();  

//         cout << endl;
//         l.del();
//         l.print();
    
// }



                // doubly linked list
    
// #include <iostream>
// using namespace std;


// class node {
//     public:
//         int data;
//         node* next;
//         node* prev;
//         node(int data)
//         {
//             this -> data = data;
//             this -> next = nullptr;
//             this -> prev = nullptr;
//         }
// };

// class LL{
//     public:
//         node* head;
//         node* temp;

//         LL()
//         {
//             head = nullptr;
//             temp = nullptr;
//         }

//     void insert(int n){
//         node* nn = new node(n);

//         if(head == nullptr){
//             head = nn ; 
//             temp = nn;
//         }
//         else{
//             nn->prev = temp;
//             temp->next = nn;
//             temp = nn;
//         }
//     }

//     void printForward(){
//         temp = head;

//         while(temp != nullptr)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//     }

//     void printBackward(){
//         while(temp != nullptr){
//             cout << temp->data << " ";
//             temp = temp -> prev;
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
//         if(n == -1){
//             istrue = false;
//             break;
//         }else{
//             l.insert(n);   
//         }

//     }
//         l.printBackward();  
// }



                // Circular Linked list


// #include <iostream>
// using namespace std;


// class node {
//     public:
//         int data.
//         node* next;
//         node(int data)
//         {
//             this -> data = data;
//             this -> next = nullptr;
//         }
// };

// class LL{
//     public:
//         node* head;
//         node* temp;

//         LL()
//         {
//             head = nullptr;
//             temp = nullptr;
//         }

//     void insert(int n){
//         node* nn = new node(n);

//         if(head == nullptr)
//         {
//             head = nn ; 
//             temp = nn;
//         }
//         else
//         {
//             temp->next = nn;
//             temp = nn;
//             nn->next = head;
//         }
//     }

//     void print(){
//         temp = head->next;
//         cout << temp -> data << " ";
//         temp = temp->next;
//         while(temp != head->next)
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
//         if(n == -1){
//             istrue = false;
//             break;
//         }else{
//             l.insert(n);   
//         }

//     }
//         l.print();  
    
// }


// #include <iostream>
// using namespace std;


// class node {
//     public:
//         int data;
//         node* next;
//         node* prev;
//         node(int data)
//         {
//             this -> data = data;
//             this -> next = nullptr;
//             this -> prev = nullptr;
//         }
// };

// class LL{
//     public:
//         node* head;
//         node* temp;

//         LL()
//         {
//             head = nullptr;
//             temp = nullptr;
//         }

//     void insert(int n){
//         node* nn = new node(n);

//         if(head == nullptr)
//         {
//             head = nn ; 
//             temp = nn;
//         }
//         else
//         {
//             nn->prev = temp;
//             temp -> next = nn;
//             temp = nn;
//         }
//     }

//     int palindrome() {
//         node* h1 = head;
//         node* t1 = temp;

//         while( h1 != t1 && h1 -> prev != t1){
//             if(h1 -> data == t1->data){
//                 h1 = h1->next;
//                 t1 = t1->prev;
//             }else{
//                 return 0;
//             }
//         }
//         return 1;
//     }
// };

// int main()
// {    
//     LL l;
//     int s;

//     cin >> s;

//     for(int i = 0 ; i < s ; i++){
//         int n;
//         cin >> n;
//         l.insert(n);

//     }

//         int x = l.palindrome();
//         if(x == 1){
//             cout << "It is a palindrome";
//         }else{
//             cout << "It is not a palindrome";
//         }
    
// }






