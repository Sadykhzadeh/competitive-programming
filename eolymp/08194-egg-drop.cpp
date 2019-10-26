// Problem:   Egg Drop (eolymp 8194)
// Link:      https://eolymp.com/problems/8194
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-10-26 07:09 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	ll d = -1, up = 9999999999999999;
	ll n, m;
	cin >> n >> m;
	for(ll i = 0; i < n; i++){
		ll q; string s;
		cin >> q >> s;
		if(s == "SAFE") d = max(d, q);
		else up = min(up, q);
	}
	if(d != -1) cout << d + 1 << ' ';
	else{
		cout << 2 << " ";
	}
	if(up != 9999999999999999) cout <<  up - 1;
	else cout << m - 1 << endl;
	return 0;
}
