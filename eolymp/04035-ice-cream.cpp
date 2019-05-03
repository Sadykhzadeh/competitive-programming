// Problem:   Ice-Cream (eolymp 4035)
// Link:      https://eolymp.com/problems/4035
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-05-03 13:21 UTC
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

ll n, k;
ll m[11000];

int f(ll x){
    ll st(1), len(0);
    for(ll i = 1; i < n; i++){
        len += (m[i] - m[i-1]);
        if(len >= x) len = 0, st++;
    }
    return st >= k;
}

int main(){
    F_READ;
    cin >> n >> k;
    for(ll i = 0; i < n; i++){
        cin >> m[i];
    }
    ll Left = 0, Right = 1000000000;
    while(Left <= Right){
        ll Middle = (Left + Right) / 2;
        if(f(Middle)) Left = Middle + 1; else Right = Middle - 1;
    }
    return cout << Left - 1 << endl, 0;
}
