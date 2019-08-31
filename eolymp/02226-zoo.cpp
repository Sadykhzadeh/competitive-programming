// Problem:   Zoo (eolymp 2226)
// Link:      https://eolymp.com/problems/2226
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-31 11:34 UTC
// Verdict:   Accepted

//sadykhzadeh
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pow2(x) (x)*(x)

void answer(ll ans){
	if(!ans){cout << 0 << endl; return;}
	char s[20];
	ll i(0);
	while(ans){
		s[i++] = (ans % 10) + '0';
		ans /= 10;
	}
	for(ll j = i - 1; j >= 0; j--) cout << (char)s[j];
	cout << endl;
}

ll n, a, b, c;
ll k;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	a = b = c = 0;
	for(ll i = 0; i < n; i++){
		ll temp; cin >> temp;
		a += temp;
		b += pow2(temp);
		c += temp*pow2(temp);
	}
	answer((a * pow2(a) - 3 * b * a + 2 * c) / 6);
	return 0;
}
