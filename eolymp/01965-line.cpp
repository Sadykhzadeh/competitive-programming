// Problem:   Line (eolymp 1965)
// Link:      https://eolymp.com/problems/1965
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-10-21 22:05 UTC
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

int main(){
    F_READ;
    ll n;
    cin >> n;
    vector <ll> a;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp; a.pb(temp);
    }
    ll x;
    cin >> x;
    ll Left = 0, Right = n, Middle;
    while(Left < Right){
        Middle = (Left + Right) / 2;
        if(x <= a[Middle]){
            Left = Middle + 1;
        }
        else Right = Middle;
    }
    return cout << Left + 1 << endl, 0;
}
