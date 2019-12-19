// Problem:   Berry Jam (Codeforces 1278C)
// Link:      https://codeforces.com/contest/1278/problem/C
// Rating:    1700   Tags: data structures, dp, greedy, implementation
// Language:  C++17 (GCC 7-32)
// Submitted: 2019-12-19 15:53 UTC
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

struct lol {ll t; ll d;};

int cmp(lol a, lol b){
	if(a.d - b.d) return (a.d < b.d);
	return (a.t > b.t);
}

int cmp2(lol a, lol b){
	 return (a.d < b.d);
}

ll n,a[200023];
vector<lol> qwe,eqw;

int main(){
	ll t;
	cin>>t;
	for(ll k = 1;k <= t; k++){
        ll n;
		cin >> n;
		qwe.clear(); eqw.clear();
		for(ll i = 1; i <= 2 * n; i++){
			cin >> a[i];
			if(a[i]==2) a[i] = -1;
		}
		ll res(0); qwe.pb({0,0});
		for(ll i = 1; i <= n; i++){
			res += a[i];
			qwe.pb({i,res});
		}
		res=0; eqw.pb({0,0});
		for(ll i = 1; i <= n;i++){
			res += a[2 * n + 1 - i];
			eqw.pb({i,res});
		}
		sort(eqw.begin(),eqw.end(),cmp);
		res = 0;
		for(ll i = 0; i <= n;i++){
			lol h = {1000000 , -qwe[i].d};
			auto it = lower_bound(eqw.begin(),eqw.end(),h,cmp2);
			if( (it != eqw.end() ) && ( (*it).d == -qwe[i].d) && ( (*it).t + i> res) ) res = (*it).t + i;
		}
		res =  n + n - res ;
		cout << res << endl;
	}
}
