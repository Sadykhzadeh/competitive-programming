// Problem:   Zmei Gorynich (Codeforces 1217B)
// Link:      https://codeforces.com/contest/1217/problem/B
// Rating:    1600   Tags: greedy, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-05 16:05 UTC
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


ll  t, n, I_LOVE_RICARDO;

vector<pair<ll, ll> > d;
int main(){
	F_READ;
	cin >> t;
	while(t--){
		cin >> n >> I_LOVE_RICARDO;
		d.clear();
		ll oru_v_golossssssssssssssssssssssssss = 0;
		for(ll i = 0; i < n; i++){
			ll DOTA_FLEXX, SOSI_SOSIIIIIIIIII;
			cin >> DOTA_FLEXX >> SOSI_SOSIIIIIIIIII;
			d.pb({DOTA_FLEXX - SOSI_SOSIIIIIIIIII, DOTA_FLEXX});
			oru_v_golossssssssssssssssssssssssss = max(oru_v_golossssssssssssssssssssssssss, DOTA_FLEXX);
		}
		sort(d.begin(), d.end(), greater<pair <ll, ll>>());
		if (I_LOVE_RICARDO == 0) {
			cout << 0 << endl;
			continue;
		}
		if (d[0].first <= 0) {
			if (oru_v_golossssssssssssssssssssssssss < I_LOVE_RICARDO) cout << -1 << endl;
			else cout << 1 << endl;
		} else {
			if (oru_v_golossssssssssssssssssssssssss < I_LOVE_RICARDO) {
				ll res = (I_LOVE_RICARDO - oru_v_golossssssssssssssssssssssssss + d[0].first - 1) / d[0].first + 1;
				cout << res << endl;
			} else cout << 1 << endl;
		}
	}
	return 0;
}
