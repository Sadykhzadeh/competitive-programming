// Problem:   Two identical digits (eolymp 8621)
// Link:      https://eolymp.com/problems/8621
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-11 08:39 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

int n, a, b, c, d;

int main(){
	cin >> n;
	a = n / 1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;
	if((a == b && c == d && a != d) || (a == c && b == d && a != d) || (a == d && b == c && a != c)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
