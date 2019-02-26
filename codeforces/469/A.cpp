// Problem:   I Wanna Be the Guy (Codeforces 469A)
// Link:      https://codeforces.com/contest/469/problem/A
// Rating:    800   Tags: greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-26 13:45 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n;
ll a, b;
ll s[130] = {0};

int main(){
    cin >> n;
    cin >> a; for(ll i = 0; i < a; i++){
        ll temp; cin >> temp; s[temp-1] = 1;
    }
    cin >> b; for(ll i = 0; i < b; i++){
        ll temp; cin >> temp; s[temp-1] = 1;
    }
    ll k = 0;
    for(ll i = 0; i < n; i++){
       k += s[i];
    }
    if(k == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    return 0;
}
