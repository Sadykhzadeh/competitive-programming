// Problem:   Chocolates (Codeforces 1139B)
// Link:      https://codeforces.com/contest/1139/problem/B
// Rating:    1000   Tags: greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-21 16:31 UTC
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

ll n, hh = 0;
vector <ll> a;

int main(){
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp; a.pb(temp); hh += temp;
    }
    ll ans = a[n-1];
    //qq(ans);
    for(ll i = n - 2; i >= 0; i--){
            a[i] = max(0ll, min(a[i], a[i+1] - 1));
            ans += a[i];
    }
    cout << ans << endl;
    return 0;
}
