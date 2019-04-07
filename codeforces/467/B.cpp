// Problem:   Fedor and New Game (Codeforces 467B)
// Link:      https://codeforces.com/contest/467/problem/B
// Rating:    1100   Tags: bitmasks, brute force, constructive algorithms, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-07 20:14 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x) cout << (#x) << " = " << (x) << endl
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

vector <ll> a;
vector < vector <ll> > as;
ll n, m, k;

int main(){
    F_READ;
    cin >> n >> m >> k;
    for(ll i = 0; i < m; i++){
        ll temp;
        cin >> temp;
        for(ll j = 0; j < n; j++){
            a.pb(temp % 2);
            temp /= 2;
        }
        as.pb(a);
        a.clear();
    }
    ll me, ans(0);
    cin >> me;
    for(ll j = 0; j < n; j++){
            a.pb(me % 2);
            me /= 2;
    }
    for(ll i = 0; i < m; i++){
        ll d = 0;
        for(ll j = 0; j < n; j++){
            if(as[i][j] != a[j]) d++;
        }
        if(d <= k) ans++;
    }
    return cout << ans << endl, 0;
}
