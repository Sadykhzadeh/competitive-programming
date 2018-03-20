// Problem:   Aaah! (eolymp 6827)
// Link:      https://eolymp.com/problems/6827
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-20 13:30 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	string a , b;
	cin >> a >> b;
	if(a.length() < b.length()) cout << "no";
	else cout << "go";
	return 0;
}
