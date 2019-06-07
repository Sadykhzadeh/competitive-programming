// Problem:   World Cup (Codeforces 996B)
// Link:      https://codeforces.com/contest/996/problem/B
// Rating:    1300   Tags: binary search, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-07 21:35 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
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

ll n, k, mi(INT_MAX),j, p;

int main(){
    F_READ;
    cin >> n;
    vector <ll> a;
    a.resize(n);            ll i(0);
    for(i = 0; i < n; i++){
        cin >> a[i];    mi = min(a[i], mi);
    }
    k = mi / n;
    j = k * n;  i-=j;
    p = 0;
    while(1 + 2 == 3){
        if(a[p] + i <= 0) return cout << p + 1 << endl, 0;
        i--;p++; if(p == n) p = 0;

    }
}
