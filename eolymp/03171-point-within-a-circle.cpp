// Problem:   Point within a circle (eolymp 3171)
// Link:      https://eolymp.com/problems/3171
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-07-26 11:36 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
	int x0, y0, R, x, y;
	cin >> x0 >> y0 >> R;
	cin >> x >> y;
	cout << ((x - x0)*(x - x0) + (y - y0)*(y - y0) <= R*R ? "YES" : "NO");
	return 0;
}
