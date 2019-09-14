// Problem:   Sum of elements (eolymp 7829)
// Link:      https://eolymp.com/problems/7829
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 11:31 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin >> n;
    double sum(0);
    while(n--){
        double temp; cin >> temp; sum += temp;
    }
    cout << fixed << setprecision(1);
    cout << sum << endl;
}
