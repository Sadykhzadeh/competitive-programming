// Problem:   How many times to repeat? (eolymp 20)
// Link:      https://eolymp.com/problems/20
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-02-28 07:19 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int sum(int x){
	int c , s;
	while(x){
		c = x % 10;
		s += c;
		x/=10;
	}
	return s;
}

int main(){
	int a , i = 0;
	cin >> a;
	while(a>0){
		a= a - sum(a);
		i++;
	}
	cout << i << endl;
	return 0;
}
