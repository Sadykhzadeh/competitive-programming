// Problem:   Sorting in Descending Order (eolymp 4738)
// Link:      https://eolymp.com/problems/4738
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-29 13:15 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

ll temp, n;
vector <ll> a;

int main(){
	cin >> n;
	for(ll i = 0 ; i < n; i++){
		cin >> temp;
		a.pb(temp);
	}
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	for(ll i = 0  ; i < n; i++) cout << a[i] << " ";
	return 0;
}
