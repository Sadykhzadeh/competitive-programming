// Problem:   Lazy Misha (eolymp 3867)
// Link:      https://eolymp.com/problems/3867
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-23 13:04 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a , b, c;
	cin >> a >> b >> c;
	int d = min(a , b);
	cout << min(d , c) << endl;
	return 0;
}
