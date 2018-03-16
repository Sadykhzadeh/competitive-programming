// Problem:   Cat, dog and hare (eolymp 7813)
// Link:      https://eolymp.com/problems/7813
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-16 07:19 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

int main() {
	double a , b ,c ;
	cin >> a >> b >> c;
	double sum = a + b + c;
	sum/=2;
	a = sum - a;
	b = sum - b;
	c = sum - c;
	cout << fixed << setprecision(2) << b << " " << c << " " << a << endl;
	return 0;
}
