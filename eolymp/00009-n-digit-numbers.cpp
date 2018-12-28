// Problem:   N-digit numbers (eolymp 9)
// Link:      https://eolymp.com/problems/9
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-28 23:08 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

int main() {
    ll x[18]= {10,0,1,22,6,123,12,1124,40,11125,30,111126,84,1111127,224,11111128,144,111111129};
    ll n;
    cin >> n;
    cout << x[2*n-2] << " " << x[2*n-1] << endl;
    return 0;
}
