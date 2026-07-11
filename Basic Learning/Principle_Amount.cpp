#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    float principle_amount;
    float time_period;
    float rate_of_interest;
    cin >> principle_amount >> time_period >> rate_of_interest;
    double interest_amount = (principle_amount * time_period * rate_of_interest)/100;
    double total_amount = interest_amount + principle_amount;
    double discount = interest_amount * 0.02;
    double balance_amount = total_amount - discount;
    cout << fixed << setprecision(2);
    cout << interest_amount << endl << total_amount << endl << discount << endl << balance_amount;
    return 0;
}