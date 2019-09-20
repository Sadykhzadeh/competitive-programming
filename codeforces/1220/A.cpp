// Problem:   Cards (Codeforces 1220A)
// Link:      https://codeforces.com/contest/1220/problem/A
// Rating:    800   Tags: implementation, sortings, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-20 08:19 UTC
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

ll n;
string s;
int a[5];

int main(){
    F_READ;
    cin >> n >> s;
    for(ll i = 0; i < n; i++){
        if(s[i] == 'n') a[0]++;
        elif(s[i] == 'z') a[1]++;
        elif(s[i] == 'r') a[2]++;
        elif(s[i] == 'e') a[3]++;
        elif(s[i] == 'o') a[4]++;
    }
    ll ans, ans1;
    ans = min3(a[4],a[3],a[0]);
    a[4] -= ans; a[3] -= ans; a[0] -= ans;
    ans1 = min(a[1], min3(a[2], a[3], a[4]));
    a[1]-= ans1;a[2]-= ans1;a[3]-= ans1;a[4]-= ans1;
    while(ans--) cout << "1 ";
    while(ans1--) cout << "0 ";
    cout << endl;
    timer();
    stop;
}
