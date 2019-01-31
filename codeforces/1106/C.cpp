// Problem:   Lunar New Year and Number Division (Codeforces 1106C)
// Link:      https://codeforces.com/contest/1106/problem/C
// Rating:    900   Tags: greedy, implementation, math, sortings
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-01-31 14:08 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n, ans = 0;
ll a[1000000];

int main(){
	cin >> n;
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n); ll i = 0, j = n - 1;
	while(i <= j){
		ans += (a[i] + a[j])*(a[i] + a[j]); i++; j--;
	}
	cout << ans << endl;
	return 0;
}
