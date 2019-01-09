// Problem:   Equilateral triangle (eolymp 4805)
// Link:      https://eolymp.com/problems/4805
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-09 21:21 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n;

int main(){
    cin >> n;
    cout << fixed << setprecision(4) << (double)(n+n+n) << ' ' << (double)(n * n * sqrt(3) / 4) << endl;
    return 0;
}
