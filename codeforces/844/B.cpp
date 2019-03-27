// Problem:   Rectangles (Codeforces 844B)
// Link:      https://codeforces.com/contest/844/problem/B
// Rating:    1300   Tags: combinatorics, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-27 19:15 UTC
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

ll m, n;
ll a[60][60];
ll sum[60];

int yy(ll x){
    ll k = 0;
    for(ll i = 1; i < x; i++) k += i;
    return k;
}

int main(){
    sum[0] = 0;
    sum[1] = 0;
    sum[2] = 1;
    sum[3] = 2;
    for(ll i = 4; i < 60; i++) sum[i] = yy(i);
    cin >> n >> m;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++) cin >> a[i][j];
    }
    if(n == m && m == 1){cout << 1 << endl; return 0;}
    else{
            ll ans = 0;
        for(ll i = 0; i < n; i++){
            ll bl, wh; bl = wh = 0;
            for(ll j = 0; j < m; j++){
                if(a[i][j] == 1) bl++;
                else wh++;
            }
            //sum += pow(2, c0)+ pow(2, c1) - c1-c0-2;
            ans += pow(2,wh) + pow(2,bl) - (wh + bl); ans-=2;
        }
        for(ll j = 0; j < m; j++){
            ll bl, wh; bl = wh = 0;
            for(ll i = 0; i < n; i++){
                if(a[i][j] == 1) bl++;
                else wh++;
            }
            ans += pow(2,wh) + pow(2,bl) - (wh + bl); ans-=2;
        }
        cout << n * m + ans << endl;
    }
    return 0;
}
