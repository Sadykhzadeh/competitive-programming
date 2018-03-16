// Problem:   Invertor (eolymp 2098)
// Link:      https://eolymp.com/problems/2098
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-16 06:42 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;

int main() {
	int n , a[10000];
	cin >> n;
	for( int i = 0 ; i < n  ; i++) cin >> a[i];
	for( int i = n - 1 ; i >= 0  ; i--) cout <<  a[i] << " ";
	return 0;
}
