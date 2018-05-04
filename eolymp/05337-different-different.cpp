// Problem:   Different-different (eolymp 5337)
// Link:      https://eolymp.com/problems/5337
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-04 20:04 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , a;
	set <int> s;
	cin >> n;
	for(int i = 0; i < n; i++){
     cin >> a;
     s.insert(a);
	}
	cout << s.size() << endl;
	return 0;
}
