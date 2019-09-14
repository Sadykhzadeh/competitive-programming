// Problem:   Quick Sort (eolymp 4848)
// Link:      https://eolymp.com/problems/4848
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 11:24 UTC
// Verdict:   Accepted

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a;
	vector <int> n;
	while(cin >> a){
		n.push_back(a);
	}
	sort(n.begin() , n.end());
	for(int i = 0 ; i < n.size(); i++) cout << n[i] << " ";
	return 0;
}
