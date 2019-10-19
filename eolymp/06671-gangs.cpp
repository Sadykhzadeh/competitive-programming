// Problem:   Gangs (eolymp 6671)
// Link:      https://eolymp.com/problems/6671
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-10-19 08:28 UTC
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

ll f[20], arr[20][20], n, m;

string solve(string s, ll n, ll m){
	if(!n) return s;
	if(n == 1){
		s+='E'; s+='S';
		return s;
	}
	ll k = upper_bound(arr[n], arr[n] + n, m) - arr[n];
	if(k != 0) m -= arr[n][k - 1];
	ll q = m / f[k], r = m % f[k];
	s+='E';
	s = solve(s, n - k - 1, q);
	s+='S';
	s = solve(s, k, r);
	return s;
}

int main(){
    F_READ;
	f[0] = 1;
	for(ll i = 1; i < 20; i++){
		arr[i][0] = f[i - 1] * f[0];
		for(ll j = 1; j < i; j++) arr[i][j] = arr[i][j - 1] + f[i - j - 1] * f[j];
		f[i] = arr[i][i - 1];
	}
	while (cin >> n >> m){
        if(!m && !m) return 0;
		if(f[n-1] <= m - 1) cout << "ERROR" << endl;
		else{
			string s;
			cout << solve(s, n - 1, m - 1) << endl;
		}
	}
	timer();
	stop;
}
