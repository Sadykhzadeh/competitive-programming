// Problem:   Minimum Ternary String (Codeforces 1009B)
// Link:      https://codeforces.com/contest/1009/problem/B
// Rating:    1400   Tags: greedy, implementation
// Language:  GNU C++11
// Submitted: 2019-08-28 11:28 UTC
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

string a;

int main(){
    F_READ; cin >> a;
    ll n = a.length(), cnt(0);
    for(ll i = 0; i < n; i++){
        if((int)a[i] - 48 == 1) cnt++;
    }
    if(!cnt) return cout << a << endl, 0;
    ll temp;
    for(ll i = 0; i < n; i++){
        if(a[i] == '0') cout << a[i];
        elif(a[i] == '2'){temp = i; break;}
    }
    for(ll i = 0; i < cnt; i++) cout << 1;
    for(ll i = temp; i < n; i++){
        if(a[i] != '1') cout << a[i];
    }
    return cout << endl, 0;
}
