// Problem:   Factors (eolymp 2700)
// Link:      https://eolymp.com/problems/2700
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-06 23:51 UTC
// Verdict:   Accepted

#define ll long long

using namespace std;

#include <bits/stdc++.h>

ll t;

int main(){
	cin >> t;
	while(t--){
		ll n, maxa = -1;
		cin >> n;
		for(ll i = 0; i <= 30; i++){
	 		ll cis = 1 << i;
 			ll ciss = (1 << i) * 3;
 			if(cis<=n) maxa=max(cis,maxa);
 			if(ciss<=n) maxa=max(ciss,maxa);
		}
		cout<<maxa<<endl;
	}
	return 0;
}
