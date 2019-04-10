// Problem:   Fun with Integers (Codeforces 1062D)
// Link:      https://codeforces.com/contest/1062/problem/D
// Rating:    1800   Tags: dfs and similar, graphs, implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-10 09:46 UTC
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

ll n, ans(0);

int main(){
    F_READ;
    cin >> n;
    for(ll i = 2; i <= n; i++){
        ans += i * (n / i - 1);
    }
    return cout << ans * 4 << endl, 0;
}
