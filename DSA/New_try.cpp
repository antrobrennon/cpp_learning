#include <iostream>
using namespace std;

struct listnode{
    int data;
    listnode* next;

    listnode() : data(0), next(nullptr){}
    listnode(int x) : data(x) , next(nullptr){}
    listnode(int x, listnode* next) : data(x) , next(next){}
};

class output {
    public:
        listnode* head = nullptr;
        listnode* temp = nullptr;

    void insert(int n){
        listnode* nn = new listnode(n);

        if(head == nullptr){
            head = nn;
            temp = nn;
        }else{
            temp->next = nn;
            temp = nn;
        }
    }

    void print(){
        temp = head;
        
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main(){
    int n;
    cin >> n;

    output l;

    for(int i = 0 ; i < n ; i++){
        
    }


}
