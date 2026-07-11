// There are multiple types of functions & cases:
//     I)Default Parameter
//     II)Multiple Parameter
//     III)Return Values
//     IV)Pass by reference
//     V)Pass Array
//     VI)Pass Structures



// #include <iostream>
// #include <string>
// using namespace std;


//      I)Default Parameter || optional parameter


// void Function(string country = "Norway")
// {
//     cout << country << endl;
// }
// int main() {
//     Function("Sweden");
//     Function("India");
//     Function("Korea");
//     Function();
// }

//      II) Multiple Parameter

// void myFunction(string fname, int age) {
//   cout << fname << " Refsnes. " << age << " years old. \n";
// }

// int main() {
//   myFunction("Liam", 3);
//   myFunction("Jenny", 14);
//   myFunction("Anja", 30);
//   return 0;
// }



    // III)Return Values

// int doubleGame(int x) {
//   return x * 2;
// }

// int main() {
//   for (int i = 1; i <= 5; i++) {
//     cout << "Double of " << i << " is " << doubleGame(i) << endl;
//   }
//   return 0;
// }



// IV) Pass By Reference

// Here we can assign value to the address of a variable which is passed inside the parameter


// void reference (int &num)
// {
//     cout << "The number is: " << num << endl;
// }

// int main(){
//     int val;
//     cin >> val;

//     reference(val);
// }



//          V)Passing Array

// void function(int arr[], int n)
// {
//     for(int i = 0 ; i < n ; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0 ; i < n ; i++)
//     {
//         cin >> arr[i];
//     }

//     function(arr,n);
// }


// class function{
//     public:
//         // function;
//         void just(){
//             cout << "Hello" << endl;
//         }
        
// };

// int main(){
//     int n;
//     cin >> n;

//     for(int i = 0 ; i < n ; i++)
//     {
//         function obj;
//         obj.just();
//     }
// }



            // VI)Pass Structueres
             
// struct Car{
//     string name;
//     string modelNo;
//     string noPlate;

//     void initialize(){
//         cin >> name;
//         cin >> modelNo;
//         cin.ignore();
//         getline(cin,noPlate);
//     }

//     void print()
//     {
//         cout << "The name of the car is: " << name << endl;
//         cout << "The model number of the car is: " << modelNo << endl;
//         cout << "The number plate of the car is: " << noPlate;
//     } 
// };

// int main()
// {
//     Car obj1;
//     obj1.initialize();
//     obj1.print();
// }


// struct Car
// {
//     string name;
//     int modelNo;
// };

// void print(Car d){
//     cout << "The name of the car is: " << d.name << endl;
//     cout << "The model number of the car is: " << d.modelNo << endl;
// }

// int main()
// {
//     Car obj1 = {"WagonR",2025};
//     print(obj1);
// }




// _____________________________________________________________________________________________________________________

// #include <iostream>
// using namespace std;


// int functions(int age, int height)
// {
//     return age + height;
// }

// double functions(double age, double height)
// {
//     return age + height;
// }


// int main() 
// {
//     int details =  functions(15,2);
//     double details2 = functions(16.5, 2.2);

//         cout  << "His age is: " << details << " and height is: " << details2 << endl;
// }


   

// The scope of the variable has three types 
    //     I)Global Scope
    //     II)Local Scope 
    //     III)Both variables declared

    // Global Varaible: It is usually initialized outside the function and can be accessed by both functions and main function
    // Local Variable: It is usually initialized inside the function and its scope is limited inside the function. it cannot be accessed outside the respective function.
    // Both Variable: We can use both local and global variable (both inside and outside the function) but the variable inside the function is priorotiesed inside function (if they have same variable  name).
    //                 so we can differentiate with differentt variable for further efficiently using the code.




    // Recursions are the most common and important concepts of functions. Here a function calls itself again and again until a specific condition is reached or terminated;
    
// #include <iostream>
// using namespace std;

// int recursion (int val)
// {
//     if(val == 0){
//         cout << 0 << endl;
//         cout << "Launch begin!";
//         return 0;
//     }else{
//         cout << val << endl;
//         return recursion(val - 1);
//     }
// }


// int main()
// {
//     int countDown;
//     cin >> countDown;

//     recursion(countDown);
// }



            // Inheritance

// Inheritance allows user to reuse code of different classes
    // *there are two main types
    //     I)Base class
    //     II)Derived class


// #include <iostream>
// using namespace std;

// class Car{
//     protected:
//         string brand = "Ford";
//         string NoPlate = "FC KD 5555";
// };

// class Car1 : public Car {
//     public: 
//         string name = "Ford";

//     void Printl(){
//         cout << "The car is " << name << " from " << brand << "with number plate " << NoPlate << endl;
//     }

// };


// int main()
// {
//     Car1 obj1;
//     obj1.Printl();
// }


// There are two types of inheritance
    // I) Multilevel Inheritance - 1 base class with two derived class;
    // II)Multiple Inheritance = 1 derived class inherits from 2 base class;

    // Here we can use both protected and public

// Polymorphism

// Single Funciton -> different purposes. 
// We use the keyword virtual to make it as least important function in polymorphism. The function which uses 
// virtual keyword will not be printed and if the derived function that dont have virtual keyword


// "->" this symbol refers to the current object of the function
// Animal* a = new Animal();
// a->sound();


// Templates:


