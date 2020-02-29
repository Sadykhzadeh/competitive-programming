// Problem:   Collecting Coins (Codeforces 1294A)
// Link:      https://codeforces.com/contest/1294/problem/A
// Rating:    800   Tags: math
// Language:  C++17 (GCC 7-32)
// Submitted: 2020-02-29 06:45 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t;
	cin >> t;
	for(ll i = 0; i < t; i++){
		ll a[3], n;
		cin >> a[0] >> a[1] >> a[2] >> n;
		sort(a, a + 3);
		n -= 2 * a[2] - a[1] - a[0];
		if(n < 0 || n % 3 != 0) puts("NO");
		else puts("YES");
	}
	return 0;
}
