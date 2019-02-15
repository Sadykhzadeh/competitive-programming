// Problem:   Superhero Transformation (Codeforces 1111A)
// Link:      https://codeforces.com/contest/1111/problem/A
// Rating:    1000   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-15 19:08 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

vector <bool> a, b;
string x, y;

int main(){
    cin >> x >> y;
    if(x.length() != y.length()){cout << "No" << endl; return 0;}
    for(ll i = 0; i < x.length(); i++){
        if(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'u' || x[i] == 'o'){
            a.pb(true);
        }
        a.pb(false);
    }
    for(ll i = 0; i < y.length(); i++){
        if(y[i] == 'a' || y[i] == 'e' || y[i] == 'i' || y[i] == 'u' || y[i] == 'o'){
            b.pb(true);
        }
        b.pb(false);
    }
    ll p = min(a.size(), b.size());
    for(ll i = 0; i < p; i++){
        if(a[i] != b[i]){cout << "No" << endl; return 0;}
    }
    cout << "Yes" << endl;
    return 0;
}
