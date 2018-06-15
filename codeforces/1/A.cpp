// Problem:   Theatre Square (Codeforces 1A)
// Link:      https://codeforces.com/contest/1/problem/A
// Rating:    1000   Tags: math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-15 11:24 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

int main(){
	long double a , b , c;
	cin >> a >> b >> c;
	ll ans = ceil (b / c) * ceil (a / c);
	cout << ans << endl;
}
