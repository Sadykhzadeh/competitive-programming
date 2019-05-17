// Problem:   Olympiad in Hogwarts (eolymp 4857)
// Link:      https://eolymp.com/problems/4857
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-17 11:05 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll a, b, c, d;
ll k;

int main(){
    cin >> a >> b >> c >> d >> k;
    ll ans = max(max(a,b),max(c,d));
    cout << (ans - 1) / k + 1<< endl;
    return 0;
}
