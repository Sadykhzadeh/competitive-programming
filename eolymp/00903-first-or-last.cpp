// Problem:   First or last? (eolymp 903)
// Link:      https://eolymp.com/problems/903
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-23 13:46 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , a, b ;
	cin >> n;
	a= n % 10;
	b = n / 100 ;
	if(a> b) cout << a;
	else if( a < b) cout << b;
	else cout << "=";
	return 0;
}
