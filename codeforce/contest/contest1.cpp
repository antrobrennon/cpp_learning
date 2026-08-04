#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long tok[3];
        cin >> tok[0] >> tok[1] >> tok[2];

        sort(tok, tok + 3);
        
        long long ans = min(tok[1] - tok[0], tok[2] - tok[1]);
        cout << ans << "\n";
    }
    return 0;
}