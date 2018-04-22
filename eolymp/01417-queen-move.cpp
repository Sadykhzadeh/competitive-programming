// Problem:   Queen Move (eolymp 1417)
// Link:      https://eolymp.com/problems/1417
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-22 17:05 UTC
// Verdict:   Accepted

#include<bits/stdc++.h>

using namespace std;

int main(){
	long long m , n , x , y;
	cin >> m >> n >> x >> y;
	long long s = m + n - 2;
	long long a = min(m - x, n - y);
	long long b = min(m - x, y - 1);
	long long c = min(x - 1, n - y);
	long long d = min(x - 1, y - 1);
	s += (a + b + c + d);
	cout << s << endl;
	return 0;
}
