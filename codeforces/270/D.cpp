// Problem:   Greenhouse Effect (Codeforces 270D)
// Link:      https://codeforces.com/contest/270/problem/D
// Rating:    1700   Tags: dp
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-23 09:13 UTC
// Verdict:   Accepted

typedef long long ll;
typedef unsigned long long ull;
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
#define mod(x, m) ((x) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007LL
#define line cout << endl << endl << "========================" << endl
#define COUT(x) return cout << (x) << endl, 0;
#define stop return 0
using namespace std;
#include <bits/stdc++.h>
ll T1 = clock();
void timer(){rus_lang; ll T2(clock());cerr<<"Time: "<<(T2-T1)/1000.<<" sec."<<endl;
cerr << "Azer_Sadykhzadeh (:";}
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

ll n, m;
ll a[5005], dp[5004];

int main(){
    F_READ;
    cin >> n >> m;
    for(ll i = 1; i <= n; i++){
        double temp;
        cin >> a[i] >> temp;
    }
    ll ans(0);
    for(ll i = 1; i <= n; i++){
        dp[i] = 1;
        for(ll j = i - 1; j >= 1; j--){
            if(a[i] >= a[j]){
                dp[i] = max(dp[i],dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << n - ans << endl;
    timer();
    stop;
}
