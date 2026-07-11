        // * Queue using array == normal array
        // * Queue using linked list
        // * Queue Implementation

        // * It is (FIFO) first in first out.
        // * Here insert function is enqueue which is used to insert elements;
        // * If i want to delete an element we use dequeue;
        // * Here peek is used to view the first element;
        // * Here we insert always happen at rearend and deletion happens in frontend;
        // * Types of Queue

        // array, linked list, collection

        // OverFlow - if the size is fixed and the inputs are still procceeded then it is called as OverFlow; 
        // UnderFlow - if there is no elements and i want to access them it is called as UnderFlow;

        // If there is element in the queue then index starts with zero '0';
        // If there is no element in the queue then it starts with '-1';
        // if i am accessing the first element then i increment both rear and frontend. We do so because when i get first element it would be in default position '-1' so i increment to store element at the index '0';
        
   
#include <iostream>
using namespace std;


class Queue {
    public:
        int f = -1;
        int r = -1;
        int a[50];

    void enqueue(int s)
    {
        if(f == -1 && r == -1){
            a[++f] = s;
            ++r;
        }else{
            a[++f] = s;
        }
    }
    
    void dequeue (){
        if(f == -1 && r == -1){
            cout << "Under Flow";
        }
        else
        {
            cout << a[r];
            r++;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    Queue obj1;
    for(int i = 0 ; i < n ; i++)
    {
        int s;
        cin >> s;

        obj1.enqueue(s);
    }

    for(int i = 0 ; i < n ; i++)
    {
        obj1.dequeue();
    }
}
