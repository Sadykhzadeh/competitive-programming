// Problem:   Average train speed (eolymp 5139)
// Link:      https://eolymp.com/problems/5139
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-05 13:16 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	double a , b;
	cin >> a >> b;
	cout << fixed << setprecision(4) << (2 * a * b) / ( a + b ) << endl;
	return 0;
}
