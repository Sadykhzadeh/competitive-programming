// Problem:   Stock Arbitraging (Codeforces 1150A)
// Link:      https://codeforces.com/contest/1150/problem/A
// Rating:    800   Tags: greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-29 15:36 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x)  cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

using namespace std;

#include <bits/stdc++.h>

int main(){
    F_READ;
    ll n, m, r;
    cin >> n >> m >> r;
    vector <ll> s, b;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp; s.pb(temp);
    }
    for(ll i = 0; i < m; i++){
        ll temp; cin >> temp; b.pb(temp);
    }
    if(r == 0) return cout << 0 << endl, 0;
    if(s.size() == b.size() && s.size() == 1){
        if(r >= s[0]){
            if(s[0] >= b[0]) return cout << r << endl, 0;
            else return cout << r - (r/s[0])*s[0] + (r/s[0])*b[0] << endl, 0;
        }
        else return cout << r << endl, 0;
    }
    sort(s.begin(), s.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    ll ma = - 1, i = 0;
    while(i*s[0] <= r){
        ma = max(ma, r - (i * s[0]) + i * b[0]);
        i++;
    }
    return cout << ma << endl, 0;
}
