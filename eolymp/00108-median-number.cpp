// Problem:   Median number (eolymp 108)
// Link:      https://eolymp.com/problems/108
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-16 10:03 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a , b , c ;
	cin >> a >> b >> c;
	if( (a > b && b > c) || (c > b && b > a)) cout << b;
	else if( (b > a && a > c) || (c > a && a > b)) cout << a;
	else if( (b > c && c > a) || (a > c && c > b)) cout << c;
	return 0;
}
