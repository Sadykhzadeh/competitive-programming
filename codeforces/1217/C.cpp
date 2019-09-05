// Problem:   The Number Of Good Substrings (Codeforces 1217C)
// Link:      https://codeforces.com/contest/1217/problem/C
// Rating:    1700   Tags: binary search, bitmasks, brute force
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-09-05 16:34 UTC
// Verdict:   Accepted

typedef long long ll;
typedef unsigned long long ull;
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
#define mod(x, m) ((x) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define rus_lang setlocale(LC_ALL , "Russian")
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007LL
#define line cout << endl << endl << "========================" << endl
#define COUT(x) return cout << (x) << endl, 0;
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


ll t;
ll SOSASOSASOSASOSASOSASOSA;
string STRINGI;

int main(){
    F_READ;
	cin >> t;
	while(t--){
 		cin >> STRINGI;
  		SOSASOSASOSASOSASOSASOSA = (ll) STRINGI.size();
  		reverse(STRINGI.begin(), STRINGI.end());
  		ll SOSOSOSAPSOAPSOAPSOAOSAOPSPAPSPOP, SOSASOSASOSASOSASOSASOSASOSASOSASOSASOSASOSASOSA, j, STRINGISTRINGI;
		SOSOSOSAPSOAPSOAPSOAOSAOPSPAPSPOP = j = STRINGISTRINGI = 0, SOSASOSASOSASOSASOSASOSASOSASOSASOSASOSASOSASOSA = -1;
 	 	for(ll i = 0; i < SOSASOSASOSASOSASOSASOSA; i++) {
			if (STRINGI[i] == '1') SOSASOSASOSASOSASOSASOSASOSASOSASOSASOSASOSASOSA = i;
			j = i;
			if (SOSASOSASOSASOSASOSASOSASOSASOSASOSASOSASOSASOSA != -1) j = SOSASOSASOSASOSASOSASOSASOSASOSASOSASOSASOSASOSA;
			STRINGISTRINGI = 0;
			for(ll k = 0; j - k >= 0 && k <= 23; k++) {
	  			STRINGISTRINGI <<= 1;
	  			STRINGISTRINGI += (STRINGI[j-k] - '0');
	  			if(STRINGISTRINGI == (i - (j - k) + 1)) SOSOSOSAPSOAPSOAPSOAOSAOPSPAPSPOP++;
    		}
  		}
  		cout << SOSOSOSAPSOAPSOAPSOAOSAOPSPAPSPOP << endl;
  	}
	return 0;
}
