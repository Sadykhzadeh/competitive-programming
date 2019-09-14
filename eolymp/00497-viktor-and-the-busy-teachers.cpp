// Problem:   Viktor and the Busy Teachers (eolymp 497)
// Link:      https://eolymp.com/problems/497
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 08:06 UTC
// Verdict:   Accepted

#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, l = 0, r = 32;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            l = max(l, a);
            r = min(r, b);
        }
        cout << (l > r ? "NO" : "YES") << endl;
    }
    return 0;
}
