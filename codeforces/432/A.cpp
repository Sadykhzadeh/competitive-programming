// Problem:   Choosing Teams (Codeforces 432A)
// Link:      https://codeforces.com/contest/432/problem/A
// Rating:    800   Tags: greedy, implementation, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-23 14:30 UTC
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

ll n, k;
vector <ll> a;

int main(){
    cin >> n >> k;
    for(ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        a.pb(temp);
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] <= 5 - k) ans++;
    }
    cout << ans / 3 << endl;
    return 0;
}
