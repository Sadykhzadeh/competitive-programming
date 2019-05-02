// Problem:   Producing Snow (Codeforces 923B)
// Link:      https://codeforces.com/contest/923/problem/B
// Rating:    1600   Tags: binary search, data structures
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-05-02 20:33 UTC
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

#include <bits/stdc++.h>

using namespace std;


ll n;
ll v[100005];
ll t[100005], tz[100005];
ll zfull[100005], samo[100005];

int main(){
    F_READ;
	cin >> n;
	for(ll i = 1; i <= n; i++){
		cin >> v[i];
	}
	for(ll i = 1; i <= n; i++){
		cin >> t[i];
		tz[i] = tz[i-1] + t[i];
	}
	for(ll i = 1; i <= n; i++){
		auto it = lower_bound(tz+i, tz+n+1, tz[i-1] + v[i]) - tz;
		zfull[i]++;
		zfull[it]--;
		if(it <= n) samo[it] += (tz[i-1] + v[i]) - tz[it-1];
	}
	for(ll i = 1; i <= n; i++) zfull[i] += zfull[i-1];

	for(ll i = 1; i <= n; i++) cout << zfull[i] * t[i] + samo[i] << " \n"[i == n];
	return 0;
}
