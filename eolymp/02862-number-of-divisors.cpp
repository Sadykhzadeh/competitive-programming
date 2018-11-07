// Problem:   Number of divisors (eolymp 2862)
// Link:      https://eolymp.com/problems/2862
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-07 22:13 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int i , k = 0;
	for(i = 1 ; i < a ; i++){
		if(a % i == 0) k++;
	}
	cout << k + 1 << endl;
	return 0;
}
