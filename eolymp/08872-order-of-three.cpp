// Problem:   Order of three (eolymp 8872)
// Link:      https://eolymp.com/problems/8872
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-30 19:00 UTC
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

int main(){
    vector <ll> a;
    ll n;
    while(cin >> n){
        a.pb(n);
    }
    sort(a.begin(), a.end());
    for(ll i = 0; i < a.size(); i++) cout << a[i] << ' '; return cout << endl, 0;
}
