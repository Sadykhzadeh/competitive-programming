// Problem:   Create a triangle (eolymp 8372)
// Link:      https://eolymp.com/problems/8372
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-07-11 17:40 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n , a , b , x , z;
	cin >> n >> a >> b;
	if(
	    n < a+b and
	    a < n+b and 
	    b < n+a
	    ) cout << "YES";
	    else cout << "NO";
	return 0;
}
