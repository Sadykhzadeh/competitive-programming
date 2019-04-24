// Problem:   Middle of the Contest (Codeforces 1133A)
// Link:      https://codeforces.com/contest/1133/problem/A
// Rating:    1000   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-24 17:43 UTC
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

ll a, b, c, d;
char znak_mejdu_nimi;

void cout_func(ll ans){
    if(ans/60 < 10){
        cout << 0;
    }
    cout << ans/60 << znak_mejdu_nimi;
    if(ans%60 < 10){
        cout << 0;
    }
    cout << ans % 60 << endl;
}

int main(){
    cin >> a >> znak_mejdu_nimi >> b;
    cin >> c >> znak_mejdu_nimi >> d;
    ll va, lll;
    va= a * 60 + b;
    lll = c * 60 + d;
    ll ans = (va + lll) / 2;
    cout_func(ans);
    return 0;
}
