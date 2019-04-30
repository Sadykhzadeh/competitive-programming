// Problem:   The Longest Common Subsequence (eolymp 1618)
// Link:      https://eolymp.com/problems/1618
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-30 18:56 UTC
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
    F_READ;
    ll n;
    cin >> n;
    ll x[1010];
    for(ll i = 1; i <= n; i++) cin >> x[i];
    ll m;
    cin >> m;
    ll y[1010];
    for(ll i = 1; i <= m; i++) cin >> y[i];
    ll arr[2][1010];
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++){
            if(x[i] == y[j]) arr[i%2][j] = 1 + arr[(i+1)%2][j-1];
            else arr[i%2][j] = max(arr[(i+1)%2][j], arr[i%2][j-1]);
        }
    }
    return cout << arr[n%2][m] << endl, 0;
}
