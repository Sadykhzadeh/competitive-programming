// Problem:   The number of permutations (eolymp 2385)
// Link:      https://eolymp.com/problems/2385
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-26 08:00 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;

int main() {
	int n ;
	cin >> n;
	int tes = 1;
	while(n!= 1){tes*= n ; n--;}
	cout << tes << endl;
	return 0;
}
