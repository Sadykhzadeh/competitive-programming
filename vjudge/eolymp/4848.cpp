// Problem:   EOlymp 4848
// Link:      https://eolymp.com/problems/4848
// Language:  C++
// Submitted: 2018-11-26 19:26 UTC
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
	for(ll i = 0  ; i < n; i++) cout << a[i] << " ";
	return 0;
}
