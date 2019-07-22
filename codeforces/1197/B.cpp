// Problem:   Pillars (Codeforces 1197B)
// Link:      https://codeforces.com/contest/1197/problem/B
// Rating:    1000   Tags: greedy, implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-22 15:09 UTC
// Verdict:   Accepted

typedef long long ll;
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
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007LL
#define line cout << endl << endl << "========================" << endl
#define COUT(x) return cout << x << endl, 0;
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

ll n, maxi(0), i_love_codeforcessssssssssssssssssssssssssssssxnksnalkxn(0);
vector <ll> a;
bool asjdhlebhlbkfjhsdblkjfbhsdvkljfvbhsdkljaf = 0;

int main(){
    F_READ;
	cin >> n;
	for(ll i = 0; i < n; i++){
		ll temp; cin >> temp; a.pb(temp);
		if (a[i] > maxi){
			maxi = a[i];
			i_love_codeforcessssssssssssssssssssssssssssssxnksnalkxn = i;
		}
	}
	for(ll i = 1; i <= i_love_codeforcessssssssssssssssssssssssssssssxnksnalkxn; i++) if(a[i] < a[i - 1]) asjdhlebhlbkfjhsdblkjfbhsdvkljfvbhsdkljaf = 1;
	for(ll i = i_love_codeforcessssssssssssssssssssssssssssssxnksnalkxn + 1; i < n; i++) if (a[i] > a[i - 1]) asjdhlebhlbkfjhsdblkjfbhsdvkljfvbhsdkljaf = 1;
	if(asjdhlebhlbkfjhsdblkjfbhsdvkljfvbhsdkljaf) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
