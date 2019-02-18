// Problem:   Twins (Codeforces 160A)
// Link:      https://codeforces.com/contest/160/problem/A
// Rating:    900   Tags: greedy, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-18 09:31 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

vector <ll> a;
ll n, ans(0), kk(0);

int main(){
	cin >> n;
	for(ll i = 0; i < n; i++){
		ll temp; cin >> temp;
		a.pb(temp); kk+=temp;
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	for(ll i = 0; i < n; i++){
		ans += a[i];
		if(ans > kk / 2){cout << i+1 << endl; return 0;}
	}
	return 0;
}
