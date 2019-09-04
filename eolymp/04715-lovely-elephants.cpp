// Problem:   Lovely Elephants (eolymp 4715)
// Link:      https://eolymp.com/problems/4715
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-04 18:51 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int n;

int main()
{
	cin >> n;
	cout << ((n - n / 10 - n % 10) / 9 + 1) * 10 + (n % 10) - 10 << endl;
}
