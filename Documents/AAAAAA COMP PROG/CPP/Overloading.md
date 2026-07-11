find the prime numbers in the range of n 
class - can contain (contains data members and data methods)

    data members- int a , float b.
    methods - function inside a variable

    if a function is inside class then we can call it as methods
    we can access a class only using objects, 
    a class can contains multiple objects.
    a class can work only if objects are created

Access Modifier - public , private , protected

	public- throughout the program i can access it from anywhere
	private- only that class can access.
	protected- can access with classes within this.

each object can be called using DOT OPERATOR s1.a gives 10; s2.a = 20;


# Constructor
	-> inside a class there is a method of same class name is called constructor.
	-> It is a method 
	-> oops cannot be accessed without constructor.
	-> always in the name of class name.
	
	it have no return type and don't need to call. It only get accessed when an object is created

    # when object is created , at that time itself constructor automatically gets called by object itself.
    # Constructor works before anything in a class because before the object is called constructor gets called first and then the object is accessed.

    example for a constructor is :

	class AIDS{

        AIDS(){

        }
    }

There are three types of constructor
	I)default  
	II)non parameterized 
	III)parameterized
	IV) copy constructor

constructor is not necessary, if a constructor is not given by user it automatically assigns a default constructor and does no job.

# class cannot be accessed without constructor. It already has a default constructor if not declared

# why constructor is needed ?.
because class and object initialization happens only inside the constructor

example 

class s{
    int a;12
    float b;

    s() {
        cout <<
    }
}

here print statement works before object gets called first.

parameterized constructor - used for passing parameters;
# this paramter is called when object creation because there only parameters are passed. so parameterized constructor pass parameters in object creation.

# for default constructor

#include <iostream>
using namespace std;

class student {
    public:
        Student() {
            cout << "Defualt Constructor called" << endl;
        }
};

int main(){
    Student s;
    return 0;
}


Example for parameterized constructor:

#include <iostream>
using namespace std;

class student {
    public: 
        int id;
        string name;

        student(int i, string n) {
            id = i;
            name = n;
        }

        void display() {
            cout << id << " << name << endl;
        }
};

int main() {
    student s1(101, "Sowndarya");
    s1.display();
    return 0;
}

# Constructor Overloading

if there are duplicate constructor of same one it is called Constructor Overloding;
same datatype, same parameter ,  same no of parameter- constructor cannot work

multiple constructor can be used but the constructor must be unique , they cannot have same datatype, same parameter, same no of parameter, if so that they cannot be used effectively. so we differentiate every constructor.


#include <iostream>
using namespace std;

class Box {
    public:
        int l, b, h;

        Box() {
            l = b = h = 0;
        }

        Box(int x){
            l = b = h =x;
        }
        Box(int x, int y, int z){
            l = x;
            b = y;
            h = z;
        }
        void volume() {
            cout << l * b * h << end;
        }
};

# Copy constructor

If there are two constructor , one is copy constructor and the other is the main constructor. we can only access copy constructor only using the object of the main constructor. 

class Sample{
public:
    int x;

    Sample(int a){
        x = a;
    }
    Sample(Sample &obj) {
        x = obj.x;
    }

    void display(){
        cout << x << endl;
    }    
};

    int main(){
        Sample s1(10);
        Sample s2(s1);
        s2.display();
    }


# Inheritance
    properties of parent function can be accessed through the child class/ derived class / sub class . 
    the child class has the properties of both parents and the child.


    code:

    Class Parent{
        parent b
    }

    Class Child{
        pubic parent
        
    }


There are five types of inheritence
    I)Single Inheritance
    II)Multilevel Inheritance
    III)Multiple Inheritance
    IV)Hierarchichal Inheritance
    V)Hybrid Inheritance

    Single Inheritance 
        single child class & single parent class
        # always the parent constructor gets called first followed by the child class. 
        
#include <iostream>
using namespace std;

class Vehicle {
    public:
    Vehicle() {
        cout << "This is a vehicle << endl;
    }
}


# Multiple Inheritance
    Two base class and a child class

#include <iostream>
using namespace std;

class LandVehicle {
    public: 
    void landInfo() {
        cout << "This is a LandVehicle" << endl;
    }
};

class WaterVehicle {
    public:
    void waterInfo(){
        cout << "This is a WaterVehicle" << endl;
    }
};

class AmphibiousVehicle : public LandVehicle, public WaterVehicle {
    public:
        AmphibiousVehicle() {
            cout << "This is an AmphibiousVehicle" << endl;
        }
};

int main(){
    AmphibiousVehicle obj;

    obj.waterInfo();
    obj.landInfo();
    return 0;
}

 




# Multilevel Inheritance

3 generation of classes . a single parent class has a child class and the child class has another child class.
that child class can access through the other child class through parent classs






three classes are chain linked as generation class.



#include <iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle()
        {
            cout << "This is a Vehicle" << endl; 
        }
};

class FourWheeler : public Vehicle 
{
    public:
        FourWheeler() 
        {
            cout << "4 Wheeler Vehicle" << endl;
        }
};

class Car : public FourWheeler
{
    public :
        FourWheeler()
        {
            cout << "This 4 Wheeler Vehicle is a Car" << endl;
        }
};

int main() {
    Car obj;
    FourWheeler obj;
    Vehicle obj;
    return 0;
}

# Hierarchy Inheritance

1 base class, 2 childclass




#include <iostream>
using namespace std;

class Vehicle()
{
    public:
        Vehicle()
        {
            cout << "This is a Vehicle" << endl;
        }
};

class Car : public Vehicle
{
    public:
        Car()
        {
            cout << "This Vehicle is Car" << endl;
        }
};

class Bus : public Vehicle 
{
    public:
        Bus()
        {
            cout << "This Behicle is Bus" << endl;
        }
};

int main()
{
    Car obj1;
    Bus obj2;
    return 0;
}

# Hybrid Inheritence
        any inheritence mixed together are called as Hybrid Inheritence

#include <iostream>
using namespace std;

class Vehicle
{
        public:
        Vehicle()
        {
            cout << "This is a Vehicle" << endl;
        }
};

class Fare
{
    public:
        Fare()
        {
            cout << "Fare of Vehicle" << endl;
        }
};

class Car : public Vehicle
{
    public:
        Car()
        {
            cout << "This Vehicle is a Car" << endl;
        }
}


class Bus : public vehicle, public Fare
{
    public:
        Bus()
        {
            cout << "This Vehicle is a Bus with Fare";
        }
};


# Polymorphism
    There are two type of polymorphism
        compile time polymorphism
        run time polymosrphism

                                                        polymorphism
                                                            |
                                                            |
                         -----------------------------------------------------------
                        |                                                          |
                        |                                                          |
                    compile time                                                 runtime 
                    polymorphism                                                polymorphism
                        |                                                          |
                        |                                                          |
          ---------------------------                           -----------------------------------
          |                         |                           |                                   |
          |                         |                           |                                   |
          |                         |                           |                                   |
method overloading          operator overloading        virtual function                   pure vital Functions
                                                        (Method Overriding)                   (abstract class)



there are two main factors in compile time polymorphism 
    method overloading
    operator overloading

method overloading - if a method of same name is created again and again it cause method overloading. To prevent this we differntiate them with data types and naming

operator overloading








#include <bits/stdc++h>
using namespace std;

class Geeks {
    public:

            void add (int a, int b) {
                cout << "Integer Sum =" << a +b << endl;
            }

            void add (double a, double b) {
                cout << "Float Sum =" << a+b << endl;
            }
};

int main() {
    Geeks gfg;
    gfg.add(10, 2);
    gfg,add(5.3, 6.2);

    return 0;
}



userdefined datatype 


#include <iostream>
using namespace std;

struct Number {
    int value;

    Number(int v) {
        valuse v;
    }

    Number operator+(const Number &n){
        return Number(value + n.value);
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n1(5), n2(10);
    Number n3 = n1 + n2;
    n3.display();
}



# polymorphism 
method override.
we use keyword "virtual" that method dont work in base class.

constructive overloading ->

this is an example for method overloading;


#include <bits.stdc++.h>
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

# Standar Template Library
    Library => collection of functions 
    STTL => stores all the inbuilt functions here

    three components
        container
        algorithms
        iterators

    Containers:
        four types of containers
            I)sequence container -> array
            II)container adaptors.
            III)associated containers -> sets
            IV) Unordered associated containers




sequence container : array,vector,deqeue, list.
container adapters: stack , queue, priority queue.
associated containers- set, map, multiset, multimap.
unordered :ordered set, unordered map, unordered multiset, unordered multimap.

Sequence Containers:
array => data which works over fixed static size.
vector => data which works over dynamic size(resizable dynamic array).
queue => it is implemented with array;Insertion works in backend(rear) and deletion works in frontend, It is a linear data structure (FIFO); 
dequeue => data works (FIFO).Here both Insertion and Deletion happens on both end; It is dynamic. 
list => Implementation of doubly linked list.
forward list => Implementation of linkly list






Container Adapters:
stack: (FILO)
queue: (FIFO)
Priority Queue: works on heap structure.



Associative Container:
Set: Collections of unique elements with sorted order
Map: Map is a collection of key value pair, where you cannot repeat keys(values can be repeated and keys cannot be repeated).
MultiSet: Collection of elements sorted on the basis of their values. It allows duplicates. It allows multiple copies of values.
MultiMap: Here keys can be repeated and duplicated are allowed.







Unoredered Associative:
Unordered Set: Collection of unique elements hashed by their values.
Unordered Map: Same 
Unordered Multiset: Both works on hashing.
Unordered MultiMap: Both works on hashing.




 


    Algorithms:
        all the logical codes comes under Algorithms

        Search: Find Method, Binary Search, Count
        Sorting: Sort Method(Linear Sort), PartialSort, isSorted.
        Manipulation Algorithm(): copy, move, remove,replace, swap.
        Counting & Comparing Algorithm: Equal, Not Equal, Count, mismatch.
        Iterators: 




    Iterator:
        dont need for loop. but if need we can call iterator.

    There are five types of Iterators:
        I)Input Iterators
        II)Output Iterators
        III)Forward Iterators
        IV)Bidirectional Iterator
        V)Random Access Iterator

Input Iterator: It can only read(Read only iterator).
Output Iterator: To assign values(values can be changed).
Forward Iterator: It can behave as both Input and Output Iterator (Combination of Input and Output).
Bidirectional Iterator : I can work in both increment and decrement
Random Access Iterator: Can be accessed from anywhere.Vector can use Random Access Iterator.
stack , queue and priority queue dont support iterator method. If needed we must use only normal loop.




what is the purpose of data structure => to store data.

total 100 marks
50/60 MCQ
5 Coding Questions
1-easy (10)
3-medium (choice-2)(10)
2- hard (choice-2)(10)










