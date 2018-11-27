// Problem:   CodeForces 489A
// Link:      https://codeforces.com/problemset/problem/489/A
// Language:  GNU G++14 6.4.0
// Submitted: 2018-11-27 09:58 UTC
// Verdict:   Accepted

typedef long long ll;

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
	ll n;
	cin >> n;
	vector <ll> x(n);
	for (ll i = 0; i < n; i++) {
		cin >> x[i];
	}
	cout << n - 1;
	for (ll i = 0; i < n-1; i++) {
		ll min = x[i];
		ll ind = i;
		for (ll j = i+1; j < n; j++) {
			if (x[j] < min) {
				min = x[j];
				ind = j;
			}
		}
		ll tmp = x[i];
		x[i] = x[ind];
		x[ind] = tmp;
		cout << endl << i << " " << ind;
	}
	
	return 0;
}
