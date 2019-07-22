// Problem:   DIY Wooden Ladder (Codeforces 1197A)
// Link:      https://codeforces.com/contest/1197/problem/A
// Rating:    900   Tags: greedy, math, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-22 14:46 UTC
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

#define MAX 1000099

ll t;
ll n;


int main(){
    F_READ;
    cin >> t;
    while(t--){vector <ll> a;
        cin >> n;
        for(ll i = 0; i < n; i++){
            ll temp; cin >> temp; a.pb(temp);
        }

    sort(a.begin(), a.end());
    if(a.size() == 2){cout << 0 << endl; continue;}
    if(a[n-1] > 1 && a[n-2] > 1) cout << min(min(a[n-1], a[n-2]) - 1 , n - 2)<< endl;
    else cout << 0 << endl;
    }
}
