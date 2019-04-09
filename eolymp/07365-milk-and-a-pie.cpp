// Problem:   Milk and a pie (eolymp 7365)
// Link:      https://eolymp.com/problems/7365
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-04-09 14:08 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int n, cnt;
double tmp;

int main(){
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> tmp;
		cnt += tmp < 30.0f ? 1 : 0;
	}
	cout << (2 * cnt + 8) / 9 << " " << cnt << endl;
}
