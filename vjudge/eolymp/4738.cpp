// Problem:   EOlymp 4738
// Link:      https://eolymp.com/problems/4738
// Language:  C++
// Submitted: 2018-11-26 19:25 UTC
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
