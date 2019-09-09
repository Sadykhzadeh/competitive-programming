// Problem:   Bad Prices (Codeforces 1213B)
// Link:      https://codeforces.com/contest/1213/problem/B
// Rating:    1100   Tags: data structures, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-09 21:55 UTC
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
void timer(){ll T2(clock());cerr<<"Time: "<<(T2-T1)/1000.<<" seconds"<<endl;}
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

ll t, n;

int main(){
    F_READ;
    cin >> t;
    while(t--){
        cin >> n;
        vector <ll> a, b;
        for(ll i = 0; i < n; i++){
            ll te; cin >> te; a.pb(te); b.pb(te);
        }
        reverse(b.begin(), b.end());
        ll k = b[0];
        for(ll i = 1; i < n; i++){
            if(k <= b[i]) b[i] = k;
            else k = b[i];
        }
 ll cnt(0);       reverse(b.begin(), b.end());
        for(ll i = 0; i < n; i++){
            if(a[i] != b[i]) cnt++;}
  //cout << b[i] << ' ';      } cout << endl;
        cout << cnt << endl;
    }
    timer(); stop;
}
