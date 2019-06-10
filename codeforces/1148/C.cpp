// Problem:   Crazy Diamond (Codeforces 1148C)
// Link:      https://codeforces.com/contest/1148/problem/C
// Rating:    1700   Tags: constructive algorithms, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-10 10:31 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> Azer_Sadykhzadeh
Programming Language: C++
*/
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

//#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;

#include <bits/stdc++.h>

ll n, a[300001];
vector < pair <ll, ll> >ans;

int main(){
    cin >> n;
    ll halfn = n >> 1;
    for(int i = 1; i <= n; ++i)
        scanf("%lld", &a[i]);
    for(int i = 1; i <= n; ++i) {
        if(i == a[i])
            continue;
        int j = a[i];
        if(abs(i - j) >= halfn) {
            ans.pb({i,j});
            swap(a[i], a[j]);
        } else if(i - 1 >= halfn) {
            ans.pb({1,i});
            ans.pb({1,j});
            ans.pb({1,i});
            swap(a[1], a[i]);
            swap(a[1], a[j]);
            swap(a[1], a[i]);
        } else if(n - j >= halfn){
            ans.pb({i, n});
            ans.pb({j, n});
            ans.pb({i, n});
            swap(a[i], a[n]);
            swap(a[j], a[n]);
            swap(a[i], a[n]);
        } else {
            ans.pb({i,n});
            ans.pb({1,n});
            ans.pb({1,j});
            ans.pb({1,n});
            ans.pb({i,n});
            swap(a[i], a[n]);
            swap(a[1], a[n]);
            swap(a[1], a[j]);
            swap(a[1], a[n]);
            swap(a[i], a[n]);
        }
        if(i != a[i]) i--;
    }
    cout << ans.size() << endl;
    for(ll i = 0; i < ans.size(); i++) printf("%lld %lld\n", ans[i].first, ans[i].second);
}
