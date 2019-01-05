// Problem:   Squares and Segments (Codeforces 1099B)
// Link:      https://codeforces.com/contest/1099/problem/B
// Rating:    1100   Tags: binary search, constructive algorithms, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-01-05 20:26 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n;
vector <ll> a;

int prost(ll x){
    for(ll k = 2; k <= x / 2; k++){
        if(x % k == 0) return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> n;
    ll res = sqrt(n);
    if(n % res == 0) cout << res + (n / res) << endl;
    else cout << res + (n / res) + 1 << endl;
    return 0;
}
