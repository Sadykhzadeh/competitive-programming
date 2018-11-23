// Problem:   Book shelf (eolymp 8355)
// Link:      https://eolymp.com/problems/8355
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-23 19:26 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	deque<int> a;
	int n , b , c;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> b;
		switch(b){
			case 1: cin >> c; a.push_front(c); break;
			case 2: cin >> c; a.push_back(c); break;
			case 3:cout << a.front() << endl;a.pop_front(); break;
			case 4:cout << a.back() << endl;a.pop_back(); break;
		}
	}
}
