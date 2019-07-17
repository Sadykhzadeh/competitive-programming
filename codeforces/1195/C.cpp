// Problem:   Basketball Exercise (Codeforces 1195C)
// Link:      https://codeforces.com/contest/1195/problem/C
// Rating:    1400   Tags: dp
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-07-17 16:33 UTC
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

int n;
int s1[1000000], olollolololololllll[1000000];
ll LALALALALALALALALAL[1000000], dp2[1000000];

int main() {
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> s1[i];
	for(int i = 1; i <= n; i++)
		cin >> olollolololololllll[i];
	LALALALALALALALALAL[1] = s1[1], dp2[1] = olollolololololllll[1];
	for(int i = 2; i <= n; i++) {
		LALALALALALALALALAL[i] = max(LALALALALALALALALAL[i - 1] - s1[i - 1], dp2[i - 1]) + s1[i];
		dp2[i] = max(dp2[i - 1] - olollolololololllll[i - 1], LALALALALALALALALAL[i - 1]) + olollolololololllll[i];
	}
	cout << max(LALALALALALALALALAL[n], dp2[n]);
	return 0;
}
