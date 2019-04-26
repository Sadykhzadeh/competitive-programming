// Problem:   Serval and Bus (Codeforces 1153A)
// Link:      https://codeforces.com/contest/1153/problem/A
// Rating:    1000   Tags: brute force, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-04-26 12:36 UTC
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

ll n, t, mint = 1e9 + 19, minind = -1;

int main(){
	F_READ;
	cin >> n >> t;
	for(ll i = 0; i < n; i++){
        ll s, d, mins;
		cin >> s >> d;
		if(s >= t) mins = s;
		else{
			ll dd = (t-s + d - 1)/d;
			mins = s + dd*d;
		}
		if(mins < mint){
			minind = i+1;
			mint = mins;
		}
	}
	return cout << minind << endl, 0;
}
