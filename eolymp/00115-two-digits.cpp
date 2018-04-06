// Problem:   Two digits (eolymp 115)
// Link:      https://eolymp.com/problems/115
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-06 19:11 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int m[100] , n;
	cin >> n;
	m[1] = 2; m[2] = 4;
	for(int i = 3; i <= n; i++) m[i] = m[i-1] + m[i-2];
	cout << n[m];
}
