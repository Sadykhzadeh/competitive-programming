// Problem:   Cake (eolymp 1949)
// Link:      https://eolymp.com/problems/1949
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-09 13:28 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0 || n == 1) cout << n / 2;
	else cout << n;
	return 0;
}
