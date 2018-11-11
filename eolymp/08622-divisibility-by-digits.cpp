// Problem:   Divisibility by digits (eolymp 8622)
// Link:      https://eolymp.com/problems/8622
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-11 08:47 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

int n, a, b, c, d;

int main(){
	cin >> n;
	a = n / 1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;
	if(a == 0 || b == 0 || c == 0 || d == 0) cout << "NO" << endl;
	elif(((n % a == 0 && n % b == 0 && n % c == 0 && n % d == 0))) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
