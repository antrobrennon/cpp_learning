// #include <iostream>
// using namespace std;

// class node{
//     public:
//         int data;
//         node* next;

//     node(int data)
//     {
//         this->data = data;
//         this->next = nullptr;
//     }
// };

// class LL {
//     public:
//         node* head = nullptr;
//         node* temp = nullptr;

//     void insert(int n)
//     {
//         node* nn = new node(n);

//         if(head == nullptr)
//         {
//             head = nn;
//             temp = nn;
//         }
//         else
//         {
//             temp->next = nn;
//             temp = nn;
//         }
//     }

//     void del(int d) {
//         if(head == nullptr) return;

//         if(head->data == d)
//         {
//             node* toDelete = head;
//             head = head->next;
//             delete toDelete;
//             return;
//         }

//         temp = head;


//         while(temp->next != nullptr)
//         {
//             if(temp->next->data == d)  
//             {
//                 node* toDelete = temp->next;
//                 temp->next = temp->next->next;
//                 delete toDelete;
//                 return;
//             }
//             temp = temp->next;
//         }
//         cout << "The required element is not found";
//     }

//     void print(){
//         temp = head;
//         while(temp != nullptr)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };


// int main()
// { 
//     LL l;
//     int size, d;
//     cin >> size >> d;
    
//     for(int i = 0 ; i < size ; i++)
//     {
//         int n;
//         cin >> n;
//         l.insert(n);
//     }
//     l.print();
    
//     l.del(d);

//     l.print();
//     return 0;
// }





