// Problem:   SPOJ PT07X
// Link:      https://www.spoj.com/problems/PT07X/
// Language:  C++ (gcc 6.3)
// Submitted: 2020-02-29 08:09 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define qq(x) cerr << (#x) << " = " << x << endl
#define qq2(x,y) cerr << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define pb push_back

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
	ios_base::sync_with_stdio(false);cin.tie(0);cin.tie(0);
	cin >> n;
	g.resize(n+1);
	for(i = 0; i < n - 1; i++){
		cin >> v >> u;
		g[u].pb(v); g[v].pb(u);
		qq2(v,u);
	}
	memset(dp,-1,sizeof(dp));
	cout << (min(dfs(1,-1,1),dfs(1,-1,0)));
	//timer();
	//stop;
}
