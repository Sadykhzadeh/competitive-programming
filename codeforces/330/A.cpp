// Problem:   Cakeminator (Codeforces 330A)
// Link:      https://codeforces.com/contest/330/problem/A
// Rating:    800   Tags: brute force, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-25 20:51 UTC
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

ll n, m;
char a[30][30];

int main(){
    cin >> n >> m;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(ll i = 0; i < n; i++){
        ll temp = 0;
        for(ll j = 0; j < m; j++){
            if(a[i][j] == '.') temp++;
            else break;
        }
        if(temp == m){
            for(ll j = 0; j < m; j++){
                a[i][j] = '#';
            }
        }
    }
    for(ll j = 0; j < m; j++){
        ll temp = 0;
        for(ll i = 0; i < n; i++){
            if(a[i][j] == '.' || a[i][j] == '#') temp++;
            else break;
        }
        if(temp == n){
            for(ll i = 0; i < n; i++){
                a[i][j] = '#';
            }
        }
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(a[i][j] == '#'){
              //  cout << i << " " << j << endl;
              ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
