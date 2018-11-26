// Problem:   EOlymp 8636
// Link:      https://eolymp.com/problems/8636
// Language:  C++
// Submitted: 2018-11-26 22:32 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll n;
vector <ll> a;
ll q[100000], w[100000];
ll k = 0;
int main(){
	cin >> n;
	for(ll i = 0 ; i < n; i++){ll temp; cin >>temp; a.pb(temp);}
	for(ll i = 0 ; i < n - 1; i++){
		for ( ll j = 0; j < n-i-1; j++){
			if (a[j] > a[j+1]){ swap(a[j], a[j+1]);
			 q[k] = a[j]; w[k] = a[j+1]; k++;}
		}
	}
	cout << k<< endl;
	for(ll i = 0 ; i < k; i++){
		cout << q[i] << ' ' << w[i] << endl;
	}
	return 0;
}
