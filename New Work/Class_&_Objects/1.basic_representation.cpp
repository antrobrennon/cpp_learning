#include <iostream>
#include <cstring>
using namespace std;

class idInfo {
    public:
        string name;
        string rollNo;
        string dob;
        string add;
};

int main(){
    idInfo obj1;

    cout << "Enter your name: ";
    getline(cin,obj1.name);

    cout << "\nEnter your rollNo: ";
    cin >> obj1.rollNo;

    cout << "\nEnter your Date of Birth: ";
    cin >> obj1.dob;
    cin.ignore();

    cout << "\nEnter your Address: ";
    getline(cin,obj1.add);

    cout << "------------------------------------------------------------" << endl;
    cout << "               Student Identification Card                  " << endl;
    cout << "------------------------------------------------------------" << endl;

    cout << "               Name: " << obj1.name  << endl;
    cout << "               rollNo: "<< obj1.rollNo << endl;
    cout << "               Date of Birth: " << obj1.dob << endl;
    cout << "               Address: " << obj1.add << endl;
    cout << "------------------------------------------------------------" << endl;

}