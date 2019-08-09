// Problem:   At least one odd (eolymp 8629)
// Link:      https://eolymp.com/problems/8629
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-09 20:06 UTC
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
	if(a % 2 || b % 2 || c % 2 || d % 2) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
