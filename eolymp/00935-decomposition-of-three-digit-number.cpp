// Problem:   Decomposition of three-digit number (eolymp 935)
// Link:      https://eolymp.com/problems/935
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-14 08:06 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n ;
	cin >> n;
	n = abs(n);
	cout << n / 100 << endl;
		cout << n / 10 % 10 << endl;
	cout << n % 10 << endl;
	return 0;
}
