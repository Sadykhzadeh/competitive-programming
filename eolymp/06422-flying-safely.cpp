// Problem:   Flying Safely (eolymp 6422)
// Link:      https://eolymp.com/problems/6422
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-04 18:59 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main()
{
	int N; cin >> N;
	while (N--)
	{
		int n, m; cin >> n >> m;
		cout << n - 1 << endl;
		while (m--) cin >> n >> n;
	}
	return 0;
}
