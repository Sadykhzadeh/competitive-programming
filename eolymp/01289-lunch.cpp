// Problem:   Lunch (eolymp 1289)
// Link:      https://eolymp.com/problems/1289
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-08 13:12 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll a, b, c;

int main(){
    cin >> a >> b >> c;
    cout << a*b + b*c + a*c << endl;
    return 0;
}
