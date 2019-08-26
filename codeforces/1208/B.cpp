// Problem:   Uniqueness (Codeforces 1208B)
// Link:      https://codeforces.com/contest/1208/problem/B
// Rating:    1500   Tags: binary search, brute force, implementation, two pointers
// Language:  GNU C++11
// Submitted: 2019-08-26 12:03 UTC
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
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
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
vector <ll> a;

int main(){
    F_READ;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll temp; cin >> temp; a.pb(temp);
    }
    ll c, c1, nn(n), k;
    bool flag = 0;
    for(ll i = 0; i < n; i++){
        map <ll , ll> vis;
        flag = 0;
        for(k = 0; k < i; k++){
            if(!vis[a[k]])vis[a[k]] = 1;
            else{flag = 1; break;}
        }
        if(flag) continue;
        nn = min(nn, n - i);
        for(ll j = n - 1; j >= i; j--){
            if(vis[a[j]] == 0) vis[a[j]] = 1;
            else{flag = 1; break;}
            ll temp = n - j;
            nn = min(nn, (n-i-temp));
        }
    }
    return cout << nn << endl, 0;
}
