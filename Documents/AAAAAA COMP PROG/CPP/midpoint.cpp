#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x1, x2, y1, y2;
    cout << "Enter the co-ordinate of Mani";
    cin >> x1 >> y1;
    cout << "Enter the co-ordinate of oogesh";
    cin >> x2 >> y2;
    double X_cordinate = (x1 + x2)/2;
    double Y_coordinate = (y1 + y2)/2;
    cout << fixed << setprecision(1);
    cout << "Arun's house is located at (" << X_cordinate <<","<<Y_coordinate<<")";
}