// Problem:   Sum of neighbors (eolymp 8627)
// Link:      https://eolymp.com/problems/8627
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-11 09:10 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <set>

int n, a, b, c, d, e;
set <int> as;

int main(){
	cin >> a >> b >> c >> d >> e;
	cout << a << ' ' << a + c << ' ' << b + d << ' ' << c + e << ' ' << e << endl;
	return 0;
}
