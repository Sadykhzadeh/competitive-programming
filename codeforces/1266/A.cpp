// Problem:   Competitive Programmer (Codeforces 1266A)
// Link:      https://codeforces.com/contest/1266/problem/A
// Rating:    1000   Tags: chinese remainder theorem, math
// Language:  C++17 (GCC 7-32)
// Submitted: 2019-12-17 15:21 UTC
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
#define _CRT_SECURE_NO_WARNINGS

int main(){
    F_READ;
    ll t;
	cin >> t;
	while(t--){
		string x;
		ll sum(0),cnt(0),variable(0);
		bool flag(0);
		cin >> x;
		//qq(x);
		for(ll i = 0; i < x.size(); i++){
			ll stor = x[i] - '0';
			ll mod = stor % 10;
			stor /= 10;
			sum += mod;
			if(mod % 2 == 0 && mod != 0) flag = 1;
		}
		for(ll i = 0; i < x.size(); i++){ if(x[i] == '0'){cnt++; variable=1;}}
		//qq(cnt);
		if(flag && sum % 3 == 0 && variable == 1) cout<<"red"<<endl;
		elif(!flag && sum % 3 == 0 && variable == 1 && cnt > 1) cout<<"red"<<endl;
		else cout << "cyan" << endl;
	}
    timer();
    stop;
}
