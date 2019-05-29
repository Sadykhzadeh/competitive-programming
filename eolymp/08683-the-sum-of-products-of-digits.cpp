// Problem:   The sum of products of digits (eolymp 8683)
// Link:      https://eolymp.com/problems/8683
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-29 20:57 UTC
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
    F_READ;
    ll n, ans(1); cin >> n;
    for(ll i = 0; i < n; i++){
        ans*=45;
    }
    return cout << ans << endl, 0;
}
