// Problem:   The height of triangle (eolymp 932)
// Link:      https://eolymp.com/problems/932
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-09 22:09 UTC
// Verdict:   Accepted

//typedef long long ll;
#define FAST_READ ios_base::sync_with_stdio(false)
#define elif else if
#define pb push_back
#define ins insert
#define ll double

using namespace std;

#include <bits/stdc++.h>

ll S, h, a, D; // a > h

int main(){
    cout << fixed << setprecision(2);
    cin >> S >> a;
    // 2 * S = h * a // 2 * S = h * (h + r); // h^2 + h*r - 2*S = 0;
    D = a*a + 8*S;
    h = (-a + sqrt(D))/2;
    cout << h << endl;
    return 0;
}
