// Problem:   Dino and colors (eolymp 9636)
// Link:      https://eolymp.com/problems/9636
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2020-03-09 08:34 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll a, b;
    cin >> a >> b;
    a -= b; a-= b;
    if(a > 0) return cout << a << endl, 0;
    else puts("0");
    return 0;
}
