#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int data)
        {
            this -> data = data;
            this -> next = nullptr;
        }
};

class LL{
    public:
        node* head;
        node* temp;

        LL()
        {
            head = nullptr;
            temp = nullptr;
        }

    void insert(int n){
        node* nn = new node(n);

        if(head == nullptr){
            head = nn ; 
            temp = nn;
        }
        else{
            temp->next = nn;
            temp = nn;
        }
    }

    void print(){
        temp = head;

        while(temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

};

int main()
{
    bool istrue = true;
    
    LL l;
    int n;

    while(istrue){
        cin >> n;
        if(n == -1){
            istrue = false;
            break;
        }else{
            l.insert(n);   
        }

    }
        l.print();  
    
}
