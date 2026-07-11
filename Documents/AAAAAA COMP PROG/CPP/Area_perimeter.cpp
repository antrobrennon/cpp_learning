#include <iostream>
using namespace std;

int main() {
    int length;
    int breadth;
    cin >> length >> breadth;
    int perimeter = 2 * (length + breadth);
    int area = length * breadth;
    cout << "The required length is " << perimeter << "m" << endl;
    cout << "The required area of the rectangle is " << area << "sqm";
    return 0;

}