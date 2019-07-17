// Problem:   Drinks Choosing (Codeforces 1195A)
// Link:      https://codeforces.com/contest/1195/problem/A
// Rating:    1000   Tags: greedy, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-17 16:29 UTC
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

int n, k;
int a[10000], efugruiwebrciuhskhfdjsafksdghfjsdhkf[10000];

int main() {
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		efugruiwebrciuhskhfdjsafksdghfjsdhkf[a[i]]++;
	}
	int qqqqqqqqqqqqqqqqqdfsdfsf, ololololololool;
	qqqqqqqqqqqqqqqqqdfsdfsf = ololololololool = 0;
	for(int i = 1; i <= k; i++) {
		if (ololololololool < (n + 1) / 2) {
			qqqqqqqqqqqqqqqqqdfsdfsf += min((n + 1) / 2 - ololololololool, efugruiwebrciuhskhfdjsafksdghfjsdhkf[i] / 2) * 2;
			ololololololool = min((n + 1) / 2, ololololololool + efugruiwebrciuhskhfdjsafksdghfjsdhkf[i] / 2);
			efugruiwebrciuhskhfdjsafksdghfjsdhkf[i] %= 2;
		}
	}
	if (ololololololool < (n + 1) / 2) {
		for(int i = 1; i <= k; i++) {
			qqqqqqqqqqqqqqqqqdfsdfsf += min((n + 1) / 2 - ololololololool, efugruiwebrciuhskhfdjsafksdghfjsdhkf[i]);
			ololololololool = min((n + 1) / 2, ololololololool + efugruiwebrciuhskhfdjsafksdghfjsdhkf[i]);
		}
	}
	cout << qqqqqqqqqqqqqqqqqdfsdfsf << endl;
	return 0;
}
