// Problem:   Square of maximum (eolymp 8623)
// Link:      https://eolymp.com/problems/8623
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-11 08:54 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cmath>

int n, a, b, c, d;

int main(){
	cin >> n;
//	a = n / 1000;
	a = n / 100 % 10;
	b = n / 10 % 10;
	c = n % 10;
	ll a1, a2, a3;
	a1 = max(max(a,b),c);
	a3 = min(min(a,b),c);
	a2 = a+b+c-a1-a3;
	cout << (a1*100 + a2*10 + a3)*(a1*100 + a2*10 + a3) << endl;
	return 0;
}
