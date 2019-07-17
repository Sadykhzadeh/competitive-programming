// Problem:   Sport Mafia (Codeforces 1195B)
// Link:      https://codeforces.com/contest/1195/problem/B
// Rating:    1000   Tags: binary search, brute force, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-17 16:31 UTC
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

int main() {
	cin >> n >> k;
	ll l = 1, r = n, alalalaalalalalALALALALALALAL;
	while (l <= r) {
		alalalaalalalalALALALALALALAL = l + (r - l) / 2;
		ll x = alalalaalalalalALALALALALALAL * (alalalaalalalalALALALALALALAL + 1) / 2;
		x -= n - alalalaalalalalALALALALALALAL;
		if (x == k) break;
		elif (x < k) l = alalalaalalalalALALALALALALAL;
		else r = alalalaalalalalALALALALALALAL;
	}
 	cout << n - alalalaalalalalALALALALALALAL;
	return 0;
}
