// Problem:   The level of educational achievements (eolymp 902)
// Link:      https://eolymp.com/problems/902
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-19 11:35 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n == 1 || n == 2 || n ==3) cout << "Initial";
	else if(n == 4 || n == 5 || n ==6) cout << "Average";
	else if(n == 7 || n == 8 || n ==9) cout << "Sufficient";
	else if(n == 10 || n == 11 || n ==12) cout << "High";
	return 0;
}
