// Problem:   Digits permutation (eolymp 943)
// Link:      https://eolymp.com/problems/943
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-16 14:22 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c = n % 10;
	int b = n / 10 % 10;
	int a = n / 100 % 10;
	cout << 100*c + 10*b + a << endl;
	return 0;
}
