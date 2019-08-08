// Problem:   Larger than neighbors (eolymp 7845)
// Link:      https://eolymp.com/problems/7845
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-08 14:51 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll n, a[112];
ll k = -984321, ans(0);

int main(){
	cin >> n;
	for(ll i = 0; i < n; i++) cin >> a[i];
	for(ll i = 1; i < n - 1; i++) if(a[i] > a[i-1] && a[i] > a[i+1])ans++;
	cout << ans << endl;
}
