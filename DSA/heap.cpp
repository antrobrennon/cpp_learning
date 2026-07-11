// // min heap -> search the min element and place it as root;
// // priority queue -> used to store elements in descending order;
// // priority queue and maximum head are same;


// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     priority_queue<int> pq;

//     pq.push(10);
//     pq.push(30);
//     pq.push(20);
//     pq.push(5);

//     int n;
//     cin >> n;

//     for(int i = 0 ; i < n ; i++){
//         int e;
//         cin >> e;
//         pq.push(e);
//     }
//     cout << "Top element: " << pq.top() << endl;

//     cout << "Elements in priiority order: ";
//     while(!pq.empty()){
//         cout << pq.top() << " ";
//         pq.pop();
//     }

//     return 0;
// }


// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(10);
//     pq.push(30);
//     pq.push(20);
//     pq.push(5);

//     int n;
//     cin >> n;
    
//     for(int i = 0 ; i < n ; i++){
//         int e;
//         cin >> e;
//         pq.push(e);
//     }
//     cout << "Top element: " << pq.top() << endl;

//     cout << " Elements in priority order: ";
//     while(!pq.empty()){
//         cout << pq.top() << " ";
//         pq.pop();
//     }
//     return 0;
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// class CircularQueue {
//     int arr[5];
//     int front = -1;
//     int rear = -1;

//     public:
//         void enqueue(int x){
//             if((rear+1) % 5 == front){
//                 cout << " Queue is Full \n";
//                 return;
//             }
//             if(front == -1) front = rear = 0;
//             else rear = (rear + 1) % 5;
            
//             arr[rear] = x;
//         }
    
//         void dequeue(){
//             if(front == -1){
//                 cout << " Queue is Empty \n";
//                 return;
//             }
//             cout << "Removed: " << arr[front] << endl;

//             if(front == rear) front = rear = -1;
//             else front = (front + 1) % 5;
//         }

//         void display(){
//             if(front == -1){
//                 cout << "Queue is Empty \n";
//                 return;
//             }

//             int i = front;
//             while(true){
//                 cout << arr[i] << " ";
//                 if(i == rear) break;
//                 i = (i+1) % 5;
//             }
//             cout << endl;
//         }
// };

// int main(){
//     CircularQueue q;

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.display();

//     q.dequeue();
//     q.display();
//     q.enqueue(40);
//     q.enqueue(50);
// }



// #include <iostream>
// using namespace std;

// class CircularQueue {
//     int *arr;
//     int front;
//     int rear;
//     int size;

// public:
//     CircularQueue(int n) {
//         size = n;
//         arr = new int[size];
//         front = rear = -1;
//     }

//     bool isFull() {
//         return (rear + 1) % size == front;
//     }

//     bool isEmpty() {
//         return front == -1;
//     }

//     void enqueue(int x) {
//         if (isFull()) {
//             cout << "Queue is Full\n";
//             return;
//         }

//         if (isEmpty())
//             front = rear = 0;
//         else
//             rear = (rear + 1) % size;

//         arr[rear] = x;
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is Empty\n";
//             return;
//         }

//         cout << "Removed: " << arr[front] << endl;

//         if (front == rear)
//             front = rear = -1;
//         else
//             front = (front + 1) % size;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is Empty\n";
//             return;
//         }

//         int i = front;
//         while (true) {
//             cout << arr[i] << " ";
//             if (i == rear)
//                 break;
//             i = (i + 1) % size;
//         }
//         cout << endl;
//     }

//     ~CircularQueue() {
//         delete[] arr;
//     }
// };

// int main() {
//     int n;
//     cout << "Enter queue size: ";
//     cin >> n;

//     CircularQueue q(n);

//     int choice, value;

//     do {
//         cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
//         cin >> choice;

//         switch(choice) {
//             case 1:
//                 cout << "Enter value: ";
//                 cin >> value;
//                 q.enqueue(value);
//                 break;
//             case 2:
//                 q.dequeue();
//                 break;
//             case 3:
//                 q.display();
//                 break;
//         }
//     } while(choice != 4);

//     return 0;
// }
