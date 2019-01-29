// Problem:   Two numbers (eolymp 2325)
// Link:      https://eolymp.com/problems/2325
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-29 14:04 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

int main(){
    vector <ll> a;
    ll q, w;
    cin >> q >> w;
    while(q){
        ll temp = q % 10;
        a.pb(temp);
        q/=10;
    }
    while(w){
        ll temp = w % 10;
        a.pb(temp);
        w/=10;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for(ll i = 0; i < a.size(); i++) cout << a[i];
    return 0;
}
