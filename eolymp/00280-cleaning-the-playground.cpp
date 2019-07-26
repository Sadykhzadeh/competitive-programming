// Problem:   Cleaning the playground (eolymp 280)
// Link:      https://eolymp.com/problems/280
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-07-26 11:26 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	while (b)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}

int main()
{
	int n, m; cin >> n >> m;
	if (n == 1 || m == 1) cout << 1 << endl;
	else cout << gcd(n, m) << endl;
}
