// Problem:   Competitors’ quantity of the Olympiad (eolymp 43)
// Link:      https://eolymp.com/problems/43
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-07 10:26 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	double k , n , m , d;
	cin >> k >> n >> m >> d;
	double w = ( d * k * n * m ) / ( k * n * m - k * m - k * n - m * n );
	if(trunc(w) == w) cout << w;
	else cout << -1;
	return 0;
}
