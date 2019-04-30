// Problem:   Solarium for mushrooms (Hard) (eolymp 4361)
// Link:      https://eolymp.com/problems/4361
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-30 18:41 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x)  cout << (#x) << " = " << (x) << endl
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

ll f(ll r){
    ll res(0);
    double r2 = pow2(r);
    for(ll i = 0; i <= r; i++){
        res += (ll)sqrt(r2-pow2(i));
    }
    return 4 * res + 1;
}

int main(){
    F_READ;
    ll n;
    cin >> n;
    ll pos(0), r(1000000), m;
    while(pos < r){
        m = (pos + r) / 2;
        if(f(m) < n) pos = m + 1; else r = m;
    }
    return cout << pos << endl, 0;
}
