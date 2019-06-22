// Problem:   Coins and Queries (Codeforces 1003D)
// Link:      https://codeforces.com/contest/1003/problem/D
// Rating:    1600   Tags: greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-06-22 19:01 UTC
// Verdict:   Accepted

typedef long long ll;
/*
id: sadykhzadeh -> Azer_Sadykhzadeh
Programming Language: C++
*/
#define qq2(x,y) cout << (#x) << " = " << (x) << '\t' << (#y) << " = " << (y) << endl
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007
#define COUT(x) return cout << x << endl, 0;
#define stop return 0

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

#include <bits/stdc++.h>
#define endl "\n"

ll n,d;
map <ll,ll> m;

int main(){
	F_READ;
	cin >> n >> d;
	for(ll i = 0; i < n; i++){
		ll temp;
		cin >> temp;
		m[__builtin_ctz(temp)]++;
	}
	while(d--){
		ll temp;
		cin >> temp;
		ll ans = 0;
		for(ll i = 30; i >= 0; i--){
			if(temp == 0 || temp < 0) break;
			ll qwe = min(temp >> i, m[i]);
			temp -= (1 << i) * qwe;
			ans += qwe;
		}
		if(temp == 0) cout<<ans<<endl;
		else cout << -1 << endl;
	}
}
