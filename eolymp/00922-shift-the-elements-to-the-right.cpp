// Problem:   Shift the elements to the right (eolymp 922)
// Link:      https://eolymp.com/problems/922
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-05 09:18 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n , a[10000] , i;
	cin >> n;
	for(i = 0 ; i < n ; i++) cin >> a[i];
	cout<< a[n-1] << " ";
	for(i = 0 ; i < n-1 ; i++) cout << a[i] << " ";
	return 0;
}
