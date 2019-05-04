// Problem:   All divisors (eolymp 8669)
// Link:      https://eolymp.com/problems/8669
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-04 20:50 UTC
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

#include <bits/stdc++.h>

using namespace std;

int main(){
    F_READ;
    ll n;
    cin >> n;
    cout << 1 << ' ';
    set <ll> ans;
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0){ans.ins(i); ans.ins(n/i);}
    }
    copy(ans.begin(), ans.end(), ostream_iterator<ll>(cout, " "));
    cout << n << endl;
    return 0;
}
