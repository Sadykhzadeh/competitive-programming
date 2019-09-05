// Problem:   Coloring Edges (Codeforces 1217D)
// Link:      https://codeforces.com/contest/1217/problem/D
// Rating:    2100   Tags: constructive algorithms, dfs and similar, graphs
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-05 16:29 UTC
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


ll n, m;
vector<ll> SA[5007];
vector<pair <ll, ll> > ETO_NE_MAP_BITCH;
map<pair <ll, ll> , ll> ETO_MAP_BITCH;
ll SADYKHZADEH_TOP_TOP_TOP_TOP_TOP;

ll USED_MAZAAAAAAAAAAAAAAAAAAAAAAAAFAFA[5040];

void aaaaaaaaaaaaaaa(ll v){USED_MAZAAAAAAAAAAAAAAAAAAAAAAAAFAFA[v] = 1;for(auto i : SA[v]){if(!USED_MAZAAAAAAAAAAAAAAAAAAAAAAAAFAFA[i]){ETO_MAP_BITCH[{v, i}] = 1;aaaaaaaaaaaaaaa(i);} elif (USED_MAZAAAAAAAAAAAAAAAAAAAAAAAAFAFA[i] == 1) SADYKHZADEH_TOP_TOP_TOP_TOP_TOP = ETO_MAP_BITCH[{v, i}] = 2;else ETO_MAP_BITCH[{v, i}] = 1;}
	USED_MAZAAAAAAAAAAAAAAAAAAAAAAAAFAFA[v] = 2;
}

int main(){
    F_READ;
	cin >> n >> m;
	for(ll i = 0; i < m; i++) {
		ll v, u;
		cin >> v >> u;
		SA[v].pb(u);
		ETO_NE_MAP_BITCH.pb({v, u});
	}
	SADYKHZADEH_TOP_TOP_TOP_TOP_TOP = 1;
	for(ll i = 1; i <= n; i++){if(!USED_MAZAAAAAAAAAAAAAAAAAAAAAAAAFAFA[i]) aaaaaaaaaaaaaaa(i);}
	cout << SADYKHZADEH_TOP_TOP_TOP_TOP_TOP << endl;
	for(auto i : ETO_NE_MAP_BITCH){cout << ETO_MAP_BITCH[i] << " ";}
	return 0;
}
