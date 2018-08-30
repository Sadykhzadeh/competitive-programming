// Problem:   Find Square (Codeforces 1028A)
// Link:      https://codeforces.com/contest/1028/problem/A
// Rating:    800   Tags: implementation
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-30 20:36 UTC
// Verdict:   Accepted

#define ll long long
#define N 120

using namespace std;

#include <iostream>
#include <cmath>
#include <algorithm>

ll n, m, r = 1, u = 1;
char s[120];

int main() {
	cin >> n >> m;
	ll l = n, d = m;
	for (ll i = 1; i <= n; i++) {
		scanf("%s", s + 1);
		for (ll j = 1; j <= m; j++)
			if (s[j] == 'B') {
				l = min(l, i);
				r = max(r, i);
				u = max(u, j);
				d = min(d, j);
			}
	}
	cout << (l + r) / 2 << ' ' <<  (d + u) / 2 << endl;
	return 0;
}
