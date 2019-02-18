// Problem:   Watermelon (Codeforces 4A)
// Link:      https://codeforces.com/contest/4/problem/A
// Rating:    800   Tags: brute force, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2019-02-18 09:25 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;

#define ll long long

ll w;

int main() {
	cin >> w;
	if(w == 2){ cout << "NO" << endl; return 0;}
	else{
		if(w % 2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
