// Problem:   AB-string (Codeforces 1238D)
// Link:      https://codeforces.com/contest/1238/problem/D
// Rating:    1900   Tags: binary search, combinatorics, dp, strings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-10-09 09:57 UTC
// Verdict:   Accepted

typedef long long ll;
typedef unsigned long long ull;
/*
id: sadykhzadeh -> @Azer_Sadykhzadeh
Programming Language: (C++)
*/
#define qq2(x,y) cerr << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cerr << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((x) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
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

const int MAXN = 3e5 + 100;
ll n;
string stroka;

int main(){
    F_READ;
	cin >> n >> stroka;
	ll ans = n * (n - 1) / 2;
	for(ll i = 0; i < n - 1; ++i) if(stroka[i] != stroka[i + 1]) ans--;
	for(ll i = 0; i < n; ){
		ll cnt = i;
		while(stroka[cnt + 1] == stroka[i] && cnt < n - 1) cnt++;
		if(cnt - i >= 1){
			if(i > 0) ans -= cnt - i;
			if(cnt < n - 1) ans -= cnt - i;
		}
		i = cnt + 1;
	}
	cout << ans << endl;
	return 0;
}
