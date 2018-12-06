// Problem:   Innohorse (eolymp 8643)
// Link:      https://eolymp.com/problems/8643
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-12-06 04:00 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long b, d;
	char a, c;
	cin >> a >> b >> c >> d;
	long long ans = abs(b-d), ans1 = abs(a-c);
	cout << min(ans1, ans) << ' ' << max(ans, ans1) << endl;
	return 0;
}
