// Problem:   Portals (eolymp 7034)
// Link:      https://eolymp.com/problems/7034
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-12-14 07:39 UTC
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
#define F first
#define S second
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((x) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define line cerr << endl << endl << "========================" << endl
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

vector<vector<ll>> a;
ll cnt, cost[1400], used[1400], mini[1400];

void dfs(ll v){
	used[v] = 1;
	mini[cnt] = min(mini[cnt], cost[v]);
	for(ll i = 0; i < a[v].size(); i++){
		ll to = a[v][i];
		if (!used[to]) dfs(to);
	}
}

int main(){
	F_READ;
	ll i, n, m, u, v, res;
	cin >> n >> m;
	a.resize(n + 1);
	for(i = 1; i <= n; i++) cin >> cost[i];
	for(i = 1; i <= m; i++){
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for (i = 0; i < 1100; i++) mini[i] = 19999999999;
	for (cnt = 0, i = 1; i <= n; i++)
		if(!used[i])dfs(i), cnt++;
	ll temp = 19999999999;
	for (res = i = 0; i < cnt; i++){
		if(mini[i] < temp) temp = mini[i];
		res += mini[i];
	}
	res += temp * (cnt - 2);
	cout << res << endl;
	timer();
	stop;
}
