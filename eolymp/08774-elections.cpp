// Problem:   Elections (eolymp 8774)
// Link:      https://eolymp.com/problems/8774
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-28 18:54 UTC
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

int main(){
    F_READ;
    ll n, k;
    cin >> n >> k;
    vector <ll> a;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp; a.pb(temp);
    }
    sort(a.begin(), a.end());
    ll ma = a[0], ti = 1, ans(0);
    for(ll i = 1; i < n; i++){
        if(a[i] == ma) ti++;
        else{
            ans = max(ans, ti);
            ti = 1;
            ma = a[i];
        }
    }
    ans = max(ans, ti);
    if(ans > n / 2) return cout << "YES" << endl, 0;
    return cout << "NO" << endl, 0;
}
