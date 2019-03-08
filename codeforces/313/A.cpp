// Problem:   Ilya and Bank Account (Codeforces 313A)
// Link:      https://codeforces.com/contest/313/problem/A
// Rating:    900   Tags: implementation, number theory
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-03-08 22:59 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <bits/stdc++.h>

ll n, n1;

int main(){
	cin >> n; n1 = n;
	if (n > 0)
		cout << n << endl;
	else
	{
		if (n / 10 > n1) n1 = n / 10;
		ll temp = n % 10 + (n / 100) * 10;
		if (n % 10 + (n / 100) * 10 > n1) n1 = n % 10 + (n / 100) * 10;
		cout << n1 << endl;
	}
	return 0;
}
