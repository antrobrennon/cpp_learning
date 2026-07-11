// #include <iostream>
// using namespace std;

// struct Number
// {
//     int value;

//     Number(int v){
//         value = v;
//     }
//     Number operator+(const Number &n){
//         return Number(value + n.value);
//     }
//     void display() {
//         cout << value << endl;
//     }
// };

// int main(){
//     // { 
//     //     Number n1(5), n2(10);
//     //     Number n3 = n1 + n2;
//     //     n3.display();
//     // }
//     {
//         Number n1(5), n2(10), n4(15);
//         Number n3 = n1 + n4;
//         n3.display();  
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

class Base{
    public:

        virtual void display() {
            cout << "base class function";
        }
};

class Derived : public Base {
    public: 

        void display() override {
            cout << "Derived class Function";
        }
};

int main() {

    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display();
    return 0;
}