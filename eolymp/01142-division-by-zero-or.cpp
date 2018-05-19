// Problem:   Division by zero or ... (eolymp 1142)
// Link:      https://eolymp.com/problems/1142
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-19 19:44 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;

int main() {
	long long a , b;
	cin >> a >> b;
	if(b != 0) cout  <<  a / b << endl;
	else cout <<"ERROR" << endl;
	return 0;
}
