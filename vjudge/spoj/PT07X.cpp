// Problem:   SPOJ PT07X
// Link:      https://www.spoj.com/problems/PT07X/
// Language:  C++ (gcc 6.3)
// Submitted: 2020-02-01 08:59 UTC
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
#define eb emplace_back
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

#include <bits/stdc++.h>
using namespace std;


vector<vector<ll> > tree;
ll i, n, u, v;
ll dp[100006][2];

ll dfs(ll v, ll Parent, ll IsCovered){
  ll i, &res = dp[v][IsCovered];
  if(res != -1) return res;
  if(IsCovered)
        for(res = 1, i = 0; i < tree[v].size(); i++){
            if(tree[v][i] != Parent) res += min(dfs(tree[v][i], v, 0),dfs(tree[v][i],v,1));
        }
  else
        for(res = i = 0; i < tree[v].size(); i++){
            if(tree[v][i] != Parent) res += dfs(tree[v][i], v, 1);
        }
  return res;
}

int main(void){
    F_READ;
    cin >> n;
    tree.resize(n+1);
    for(i = 0; i < n - 1; i++){
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    memset(dp,-1,sizeof(dp));
    ll res = min(dfs(1,-1,1),dfs(1,-1,0));
    cout << res << endl;
    timer();
    stop;
}
