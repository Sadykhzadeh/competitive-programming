// Problem:   The 3n + 1 problem (eolymp 419)
// Link:      https://eolymp.com/problems/419
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-07 10:03 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;
 
int length(int az) {
    int chet = 1;
    while (az != 1) {
        if (az % 2 == 1) {
            az = az * 3 + 1;
        }
        else {
            az/=2;
        }
        chet++;
    }
    return chet;
}
 
int main() {
    int a, b;
    while(cin >> a) {
        cin >> b;
        int maxi = 0, it;
        for (int i = min(a, b); i <= max(a, b); i++) {
            it = length(i);
            if (it > maxi) {
                maxi = it;
            }
        }
        cout << a << ' ' << b << ' ' << maxi << endl;
    }
    return 0;
}
