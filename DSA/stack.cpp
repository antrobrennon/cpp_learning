// stack works under the concept of (FILO) and (LIFO);
// it has only one end that is output where data is inserted and poped out;
// The syntax is stack<datatype> and stack name;
// The push keyword inserts element inside the stack;
// To access the top most element  we use the top function.
// To access stack we have to remove or pop out the top most element to move to the next element and print by accessing the top element the gets altered everytime when we use the pop variable.
// The function size() is used to get the size of the stack.
// The funciton empty() is used to check whether the stack is empty or not by returning a true or false in (0 or 1);
// we use s.peek() to print the element in the stack and the element dont get removed;

// #include <iostream>
// using namespace std;

// class stack {
//     public:
//         int top = -1;
//     void push (int s, int arr[], int n)
//     {
//         if(top == n-1)
//         {
//             cout << "Over Flow";
//         }
//         else
//         {
//             arr[++top] = s;
//         }
//     }

//     void pop (int arr[])
//     {
//         if(top == -1)
//         {
//             cout << "Under Flow";
//         }
//         else
//         {
//             cout << arr[top];
//             top = top - 1;
//         }
//     }
// };

// int main()
// {
//     stack x;

//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0 ; i < n ; i++)
//     {
//         int s;
//         cin >> s;
//         x.push(s, arr, n);
//     }
//     x.pop(arr);
//     x.pop(arr);
//     x.pop(arr);
//     x.pop(arr);
//     return 0;
// }               

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

// class stack {
//     public:
//         node* top;

//         stack()
//         {
//             top = nullptr;
//         }

//         void push(int n)
//         {
//             node* nn = new node(n);
//             if(top == nullptr)
//             {
//                 top = nn;
//             }
//             else
//             {
//                 nn->next = top;
//                 top = nn;
//             }
//         }

//         void pop()
//         {
//             if(top == nullptr)
//             {
//                 cout << "Under Flow";
//             }
//             else
//             {
//                 cout << top->data << " ";
//                 top = top->next;
//             }
//         }
// };

// int main()
// {
//     stack s;
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         s.push(x);
//     }
//     s.pop();
//     s.pop();
    
// }

// Balanced Paranthesis:
//  
// for loop is direct accessing and for each loop is used for traverse accessing

// for each loop syntax is 

// for(char c : s){}
 


// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// bool paran(string s){
//     stack<char> st;
//     for(char c : s){
//         if(c == '(' || c == '[' || c == '{'){
//             st.push(c);
//         }else{
//             if(st.empty()){
//                 return false;
//             }else{
//                 char t = st.top();
//                 if((t == '[' && c == ']') || (t == '(' && c == ')') || (t == '{' && c == '}')){
//                     st.pop();
//                 }else{
//                     return false;
//                 }
//             }
//         }
//     }
//     return st.empty();
// }

// int main(){
//     string s;
//     cin >> s;
//     bool a = paran(s);
//     if(a == true){
//         cout << "It is a paranthesis";
//     }else{
//         cout << "It is not a paranthesis";
//     }
// }


#include <iostream>
#include <stack>
using namespace std;

int evaluatePostfix(string exp)
{
    stack<int> st;

    for(char c : exp) {
        
        if(isdigit(c)) {
            st.push(c - '0');
        }
        else
        {
            int val2  = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch (c){
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
            }
        }
    }
        return st.top();
}

int main(){
    string s;
    cin >> s;    // input = 23*54*+9-     
    cout << "Result= " << evaluatePostfix(s);
    return 0;
}

