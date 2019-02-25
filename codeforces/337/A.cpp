// Problem:   Puzzles (Codeforces 337A)
// Link:      https://codeforces.com/contest/337/problem/A
// Rating:    900   Tags: greedy
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-25 08:55 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll m, n;
vector <ll> a;

int main(){
	cin >> n >> m;
	for(ll i = 0; i < m; i++){
		ll temp; cin >> temp; a.pb(temp);
	}
	sort(a.begin(), a.end());
	ll ans = 999999999;
	for(ll i = 0; i < m - n + 1; i++){
		if(ans > abs(a[i] - a[i+n-1])){
			ans = abs(a[i] - a[i+n-1]);
		}
	}
	cout << ans << endl;
	return 0;
}
