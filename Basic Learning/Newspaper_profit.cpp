#include <iostream>
using namespace std;

int main() {
    int copies_of_special_edition;
    int price_per_copy;
    int cost_printing_NP;
    cin >> copies_of_special_edition >> price_per_copy >> cost_printing_NP;
    int selling_price = copies_of_special_edition * price_per_copy;
    int cost_price = 100 + (cost_printing_NP * copies_of_special_edition);
    cout << selling_price - (cost_price);
    return 0;
}