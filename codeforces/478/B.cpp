// Problem:   Random Teams (Codeforces 478B)
// Link:      https://codeforces.com/contest/478/problem/B
// Rating:    1300   Tags: combinatorics, constructive algorithms, greedy, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-08 20:30 UTC
// Verdict:   Accepted

typedef long long ll;
#define qq(x) cout << (#x) << " = " << (x) << endl
#define elif else if
#define pb push_back
#define ins insert
#define pow2(x) ((x)*(x))
#define mod(x, m) ((((x) % (m)) + (m)) % (m))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define F_READ ios_base::sync_with_stdio(false);cin.tie(0)
#define MOD 1000000007

using namespace std;

#include <bits/stdc++.h>

ll n, m, mn(0), mx;

int main(){
	F_READ;
	cin >> n >> m;
	ll k = n / m, r = n % m;
	mn = (k * (k-1) / 2) * (m - r);
	mn += (k * (k + 1) / 2) * r;
	cout << mn << " ";
	n -= (m-1);
	mx = (n * (n - 1) / 2);
	cout << mx << endl;
	return 0;
}
