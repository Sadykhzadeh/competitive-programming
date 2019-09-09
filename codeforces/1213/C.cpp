// Problem:   Book Reading (Codeforces 1213C)
// Link:      https://codeforces.com/contest/1213/problem/C
// Rating:    1200   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-09 22:52 UTC
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
void timer(){rus_lang; ll T2(clock());cerr<<"Время: "<<(T2-T1)/1000.<<" секунд."<<endl;
cerr << "Автор: Азер Садыхзаде";}
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

ll t;
ll m, n;

int main(){
    F_READ;
    cin >> t;
    while(t--){
        cin >> n >> m;
        n/=m;
        vector <ll> a(10);
        for(ll i = 0; i < 10; i++) a[i] = ((i + 1) * m) % 10;
        ll sum(0);
        for(ll i = 0; i < (n%10); i++) sum += a[i];
        cout << sum + n / 10 * accumulate(a.begin(), a.end(), 0LL) << endl;
    }
    timer(); stop;
}
