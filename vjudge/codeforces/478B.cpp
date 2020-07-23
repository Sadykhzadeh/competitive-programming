// Problem:   CodeForces 478B
// Link:      https://codeforces.com/problemset/problem/478/B
// Language:  GNU G++17 7.3.0
// Submitted: 2020-07-23 08:15 UTC
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
