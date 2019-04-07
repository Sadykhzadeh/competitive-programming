// Problem:   Gnomes and houses (eolymp 5339)
// Link:      https://eolymp.com/problems/5339
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-07 21:10 UTC
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

ll n, a[150][150], used[150];

void dfs(ll v){
    used[v] = 1;
    for(ll i = 1; i <= n; i++){
        if(a[v][i] && !used[i]) dfs(i);
    }
}

int main(){
    F_READ;
    cin >> n;
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        if(!used[i]){
            dfs(i); ans++;
        }
    }
    return cout << ans << endl, 0;
}
