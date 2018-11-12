// Problem:   Modular Exponentiation (eolymp 273)
// Link:      https://eolymp.com/problems/273
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-12 23:15 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cmath>

ll a, b, c, ans = 1;

int main(){
	cin >> a >> b >> c;
	for(ll i = 0; i < b; i++){
		ans = (ans * a ) % c;
	}
	cout << ans << endl;
}
