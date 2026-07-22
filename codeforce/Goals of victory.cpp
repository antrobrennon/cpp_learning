#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n - 1; ++i) {
            int val;
            cin >> val;
            sum += val;
        }
        cout << -sum << "\n";
    }
    return 0;
}
