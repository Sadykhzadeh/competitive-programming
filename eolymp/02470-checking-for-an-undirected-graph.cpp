// Problem:   Checking for an undirected graph (eolymp 2470)
// Link:      https://eolymp.com/problems/2470
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-12 18:07 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cout << (#x) << " = " << (x) << endl
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
    ll n;   cin >> n;
    ll a[110][110];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cin >> a[i][j];
            //qq2(i, j); qq(a[i][j]);
        }
    }
    for(ll i = 0; i < n; i++){
        if(a[i][i]) return cout << "NO" << endl, 0;
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(a[i][j] != a[j][i]) return cout << "NO" << endl, 0;
        }
    }
    return cout << "YES" << endl, 0;
}
