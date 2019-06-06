// Problem:   Ehab Fails to Be Thanos (Codeforces 1174A)
// Link:      https://codeforces.com/contest/1174/problem/A
// Rating:    1000   Tags: constructive algorithms, greedy, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-06 18:48 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
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

#include <bits/stdc++.h>

using namespace std;

vector <ll> a;

int main(){
    F_READ; ll n; cin >> n; a.resize(2*n);
    for(ll i = 0; i < 2*n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    ll a1, a2; a1 = a2 = 0;
    for(ll i = 0; i < n; i++) a1 += a[i];
    for(ll i = n; i < 2*n; i++) a2 += a[i];
    if(a1 != a2){
        for(ll i = 0; i < 2*n; i++) cout << a[i] << ' '; cout << endl; return 0;
    }
    else return cout << -1 << endl, 0;
}
