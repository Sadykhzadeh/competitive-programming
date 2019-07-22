// Problem:   Array Splitting (Codeforces 1197C)
// Link:      https://codeforces.com/contest/1197/problem/C
// Rating:    1400   Tags: greedy, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-22 16:42 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
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
#define MOD 1000000007LL
#define line cout << endl << endl << "========================" << endl
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

ll n, k;
vector <ll> a;

int main(){
    F_READ;
    cin >> n >> k; a.resize(n+1);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    vector <ll> ans;
    for(ll i = 2; i <= n; i++){
        ans.pb(a[i] - a[i-1]);
    }
    ans.pb(0); ll sum = 0;
    sort(ans.begin(), ans.end()); reverse(ans.begin(), ans.end());
    for(ll i = k - 1; i <= n - 1; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}
