// Problem:   Sort evens and odds (eolymp 8236)
// Link:      https://eolymp.com/problems/8236
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-29 14:13 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

int main(){
    vector <ll> b, c;
    ll temp, n;
    cin >> n;
    for(ll i = 0; i < n; i++){cin >> temp; if(temp % 2 == 0)b.pb(temp); else c.pb(temp);}
    sort(b.begin(), b.end());sort(c.begin(), c.end()); reverse(b.begin(), b.end());
    for(ll i = 0; i < c.size(); i++){
        cout << c[i] << ' ';
    }

    for(ll i = 0; i < b.size(); i++){
        cout << b[i] << ' ';
    }
    return 0;
}
