// Problem:   CodeForces 714E
// Link:      https://codeforces.com/problemset/problem/714/E
// Language:  GNU G++14 6.4.0
// Submitted: 2019-06-28 13:08 UTC
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
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define COUT(x) return cout << x << endl, 0;
#define stop return 0
using namespace std;

#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define endl "\n"

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS

ll n;
vector <ll> a, b, sor;

ll dp[4005][4005] = {0};

int main(){
    F_READ;
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1);
    sor.resize(n + 1);
    for(ll i = 1; i <= n; i++) cin >> a[i], b[i] = a[i] - i, sor[i] = b[i];
    sort(sor.begin(), sor.end());
    for(ll i = 1; i <= n; i++) dp[i][0] = 9999999999999999;
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n; j++){
            dp[i][j] = min(dp[i][j-1], dp[i-1][j] + abs(b[i]-sor[j]));
        }
    }
    return cout << dp[n][n] << endl, 0;
}
