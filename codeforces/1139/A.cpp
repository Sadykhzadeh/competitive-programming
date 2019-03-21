// Problem:   Even Substrings (Codeforces 1139A)
// Link:      https://codeforces.com/contest/1139/problem/A
// Rating:    800   Tags: implementation, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-21 15:37 UTC
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
string s;

int main(){
    cin >> n;
    cin >> s;
    for(ll i = 0; i < n; i++){
        if((int)(s[i]) % 2 == 0) ans += (1 + i);
    }
    cout << ans << endl;
    return 0;
}
