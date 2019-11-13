// Problem:   Dominated Subarray (Codeforces 1257C)
// Link:      https://codeforces.com/contest/1257/problem/C
// Rating:    1200   Tags: greedy, implementation, sortings, strings, two pointers
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-11-13 15:45 UTC
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

int sadykhzadeh(vector<ll>&v){
	int n = v.size();
	map<int,int> maps;
	for(ll i =0; i < n; i++){
		maps[v[i]]++;
		if(maps[v[i]]>=2)
			return 1;
	}
	return 0;
}

int main(){
    F_READ;
    ll T;
    cin>>T;
    while(T--){
    	ll n;
    	cin>>n;
    	vector<ll> a(n);
    	map<ll ,ll> prev;
		for(ll i =0; i < n; i++) cin >> a[i], prev[a[i]] = -1;
		vector<ll> pre(n);
		ll res = n;
		map<ll,ll> count;
		ll b = sadykhzadeh(a);
		if(b==0)
			cout<<-1<<endl;
		else
		{
			for(ll i =0; i < n; i++){
					pre[i]=prev[a[i]];
					prev[a[i]]=i;
					if(pre[i]!=-1) res = min(res,(i - pre[i]) +1);
			}
			cout << res << endl;
		}
	}
}
