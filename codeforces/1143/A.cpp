// Problem:   The Doors (Codeforces 1143A)
// Link:      https://codeforces.com/contest/1143/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-30 17:17 UTC
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

ll n, q, w;
vector <ll> a;

int main(){ q = w = 0;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        if(temp) q++;
        else w++;
        a.pb(temp);
    }
    for(ll i = 0; i < n; i++){
        if(a[i]) q--; else w--;
        if(q == 0 || w == 0) return cout << i + 1 << endl, 0;
    }
    return 0;
}
