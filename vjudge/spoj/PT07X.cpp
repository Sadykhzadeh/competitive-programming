// Problem:   SPOJ PT07X
// Link:      https://www.spoj.com/problems/PT07X/
// Language:  C++ (gcc 6.3)
// Submitted: 2020-02-29 08:03 UTC
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
cerr << "Автор: Азер Садыхзаде" << endl;}
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define endl "\n"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

vector<vector<ll> > g; // граф
ll i, n, u, v;
ll dp[100005][2];

int dfs(ll v, ll rod, ll flag){
	ll i, &res = dp[v][flag];
	if(res != -1) return res;
	if(flag)
	for(res = 1, i = 0; i < g[v].size(); i++){
		ll to = g[v][i];
		if (to != rod) res += min(dfs(to, v, 0),dfs(to,v,1));
	}
	else
	  	for(res = i = 0; i < g[v].size(); i++){
	   		ll to = g[v][i];
	    	if (to != rod)
	     		res += dfs(to, v, 1);
	  }
	qq(res);
	return res;
}
int main(){
	F_READ;
	cin >> n;
	g.resize(n+1);
	for(i = 0; i < n - 1; i++){
	  cin >> v >> u;
	  g[u].pb(v); g[v].pb(u);
	  qq2(v,u);
	}
	memset(dp,-1,sizeof(dp));
	cout << (min(dfs(1,-1,1),dfs(1,-1,0)));
	timer();
	stop;
}
