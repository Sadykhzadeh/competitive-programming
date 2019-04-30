// Problem:   Construction (eolymp 7329)
// Link:      https://eolymp.com/problems/7329
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-30 22:00 UTC
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

ll m, n;
ll a[10001];

int cnt(ll Mid){
	if (Mid == 0) return 1e9;
	ll res(0);
	for(ll i = 0; i < n; i++) res += a[i] / Mid;
	return res;
}

int main(){
	F_READ;
	cin >> n >> m;
	for(ll i = 0; i < n; i++) cin >> a[i];
	ll Left = 0, Right = 1e9;
	while (Right - Left > 1){
		ll Mid = (Left + Right) / 2;
		if(cnt(Mid) >= m) Left = Mid;
		else Right = Mid;
	}
	return cout << Left << endl, 0;
}
