// Problem:   Frame paving (eolymp 8376)
// Link:      https://eolymp.com/problems/8376
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-30 20:46 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;
 
int main() {
    long long x, y, n, a;
    cin >> x >> y >> n;
    while (n--) {
        cin >> a;
        if ((a == 2) || (x % a == 0 && (y - 2) % a == 0) || ((x - 1) % a == 0 && (y - 1) % a == 0) || ((x - 2) % a == 0 && y % a == 0))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}
