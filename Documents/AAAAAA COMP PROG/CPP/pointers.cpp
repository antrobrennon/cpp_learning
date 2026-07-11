#include <iostream>
using namespace std;

int main() 
{
    string food = "Pizza";
    string *ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    // I can change the values using pointers . but the change happens in both the variable that stores at we use their address to manipulate.

    *ptr = "Burger";
    cout << *ptr << endl;
    cout << ptr << endl;
    cout << food << endl;
    cout << &food << endl;
}