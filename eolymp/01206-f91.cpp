// Problem:   f91 (eolymp 1206)
// Link:      https://eolymp.com/problems/1206
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-11 19:16 UTC
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

ll f91(ll n){
    if(n <= 100) return f91(f91(n+11));
    else return n - 10;
}

int main(){
    F_READ;
    ll n;
    cin >> n;
    return cout << f91(n) << endl, 0;
}
