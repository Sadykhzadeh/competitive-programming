// Problem:   The square of the sum (eolymp 939)
// Link:      https://eolymp.com/problems/939
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-07 10:13 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , a, b;
	cin >> n;
	a = n % 10;
	b = n / 10;
	cout << ( a + b ) * ( a + b ) << endl;
	return 0;
}
