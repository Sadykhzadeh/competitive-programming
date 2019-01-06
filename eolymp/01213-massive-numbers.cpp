// Problem:   Massive Numbers (eolymp 1213)
// Link:      https://eolymp.com/problems/1213
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-06 08:26 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

long double a, b, c, d;
char q, q1;

int main(){
    cin >> a >> q >> b >> c >> q1 >> d;
    if(b * log(a * 1.0) < d * log(1.0 * c)) cout << c << "^" << d << endl;
    else cout << a << "^" << b << endl;
    return 0;
}
