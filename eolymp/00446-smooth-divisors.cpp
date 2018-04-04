// Problem:   Smooth Divisors (eolymp 446)
// Link:      https://eolymp.com/problems/446
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-04 21:43 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>
using namespace std;
int main(){
	long long m , n , ans = 0;
	cin >> n;
	for(m = 2 ; m < n ; m++){
		if( n / m == n % m) ans++;
	}
	cout << ans << endl;
	return 0;
 }
