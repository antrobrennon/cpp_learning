// There are two ways for struture declaration 
        // *We can have fixed object for structure 
        // *We can call muliple objects as we need for 


    // This is an example for fixed object
// #include <iostream>
// using namespace std;

// struct {
//     int myNum;
//     string myString;
// }   myStructure;

// int main() 
// {
//     myStructure.myNum = 10;
//     myStructure.myString = "Hello";
//     cout << "My Number is: " << myStructure.myNum << "\n";
//     cout << "My string is: " << myStructure.myString << "\n";
//     return 0;
// }

#include <iostream>
#include<string.h>
using namespace std;
 

struct Car
{
    string Name;
    string model_no;
    string no_plate;
};


int main() 
{

    Car car1;
    car1.Name = "Hyundai";
    car1.model_no = "i20";
    car1.no_plate ="TN 22 DR 6116";

    cout << "The Car name is: " << car1.Name << endl;
    cout << "The Model Number is: " << car1.model_no << endl;
    cout << "The Number plate is :" << car1.no_plate << endl;

    Car car2;
    cin >> car2.Name;
    cin >> car2.model_no;
    cin.ignore();
    getline(cin, car2.no_plate);

    cout << "The Car name is: " << car2.Name << endl;
    cout << "The Model Number is: " << car2.model_no << endl;
    cout << "The Number plate is :" << car2.no_plate << endl;

}



// struct part
// {
// int modelnumber;
// int partnumber;
// float cost;
// };


// int main() {
//     part part1 ={520, 9650, 152.72};
//     part part2;
//     cin >> part2.modelnumber >> part2.partnumber >> part2.cost;
//     cout << part1.modelnumber << endl;
//     cout << part1.partnumber << endl;
//     cout << part1.cost << endl;
//     cout << part2.modelnumber << endl << part2.partnumber << endl << part2.cost;
     
//     return 0;
// }