// #include <iostream>
// using namespace std;

// class MyClass {
//     public:
//         int myNum;
//         string myString;
// };


// int main() 
// {
//     MyClass obj1;

//     cin >> obj1.myNum;
//     cin >> obj1.myString;

//     cout << obj1.myNum << endl;
//     cout << obj1.myString << endl;
    
// }


// Address printer

// #include <iostream>
// using namespace std;

// class Address {
//     public:
//         string Line1;
//         string Line2;
//         string Line3;
// };

// int main() {
//     Address obj1;

//     getline(cin,obj1.Line1);
//     getline(cin,obj1.Line2);
//     getline(cin,obj1.Line3);

//     cout << obj1.Line1 << endl;
//     cout << obj1.Line2 << endl;
//     cout <<  obj1.Line3 << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;


// class MyClass{
//     public: 
//     int var;
//     void function();
// };


// void MyClass :: function()
// {
//     cout << "The number is: " << var << endl;
// }


// int main()
// {
//     MyClass obj1;
//     cin >> obj1.var;
//     obj1.function();
// }


// #include <iostream>
// using namespace std;

// class create
// {
//     public:
//         int var;
//         void multi(int number);
// };

//     void create :: multi(int number)
//     {
//         for(int i = 1 ; i <= 10 ; i++)
//         {
//             var = number * i ;
//             cout << number << " X " << i << " = " << var << endl;
//         }
//     }

// int main() {
//     int val;
//     cin >> val;

//     create obj1;
//     obj1.multi(val);
// }


// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.



// There are four major types of oops concepts:
//     I)Encapsulation
//     II)Inheritance
//     III)Polymorphism
//     IV)Abstraction


// Encapsulation - It ensures the data is sensistive and hide from user view
//     To Achieve - all class variables / attributes must be given as private, if you want to modify the private values use 
//                     public, get and set(get and set are used to access the private data);


//             *It keeps the data private and allow more controlled access towards the data


// #include <iostream>
// using namespace std;

// class salary 
// {
//     private:
//         int amount;

//     public:
//         void setsalary(int a){
//             amount = a;
//         }

//         int getsalary(){
//             return amount;
//         }
// };

// int main()
// {
//     salary person1;

//     int n;
//     cin >> n;

//     person1.setsalary(n);
//     cout << "The salary for employee is: " << person1.getsalary() << endl;

//     return 0;
// }


// // Friend Function:
// If we use the priivate method we can only access using get and set but we can also use a friend function in some case to access them directly.
