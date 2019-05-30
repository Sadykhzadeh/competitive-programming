// Problem:   Sasha and His Trip (Codeforces 1113A)
// Link:      https://codeforces.com/contest/1113/problem/A
// Rating:    900   Tags: dp, greedy, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-05-30 21:37 UTC
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

int main(){
    ll n, v; cin >> n >> v;
    ll ans = min(n-1,v); v = ans;
    for(ll i = 1; i < n; i++){
        if(n - i > v){ans += (i + 1); v++;}
        v--;
    }
    return cout << ans << endl, 0;
}
