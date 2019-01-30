// Problem:   Interesting Sum (eolymp 2392)
// Link:      https://eolymp.com/problems/2392
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-30 18:47 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back
#define ins insert

using namespace std;

#include <bits/stdc++.h>

ll n, b[3], c[3], b1 , c1;

int main(){
	cin >> n;
	for(ll i = 0; i < 3; i++){
		b[i] = n % 10;
		c[i] = n % 10;
		n /= 10;
	}
	sort(b, b + 3);
	sort(c,c + 3); reverse(c, c + 3);
	if((b[0] == 0) && (b[1] != 0)) swap(b[0], b[1]);
	elif ((b[0] == 0) && (b[1] == 0)) swap(b[0], b[2]);
	b1 = 100 * b[0] + 10 * b[1] + b[2];
	c1 = 100 * c[0] + 10 * c[1] + c[2];
	cout << b1 + c1 << endl;
	return 0;
}
