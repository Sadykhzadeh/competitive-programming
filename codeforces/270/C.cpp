// Problem:   Magical Boxes (Codeforces 270C)
// Link:      https://codeforces.com/contest/270/problem/C
// Rating:    1600   Tags: binary search, greedy, implementation, math, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-23 08:41 UTC
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

ll n, a, b;
ll ans = 0;

int main(){
    F_READ;
    cin >> n;
    while(n--){
        ll temp = 1;
        cin >> a >> b;
        if(b > 4) while(temp < b){temp*=4; a++;}
        else a++;
        ans = max(ans,a);
    }
    cout<< ans <<endl;
    timer(); stop;
}
