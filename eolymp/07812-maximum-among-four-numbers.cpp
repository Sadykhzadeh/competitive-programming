// Problem:   Maximum among four numbers (eolymp 7812)
// Link:      https://eolymp.com/problems/7812
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-23 13:03 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	int maxt(-10020);
	for(int i = 0 ; i < 4; i++)
	if(maxt < a[i])
	maxt = a[i];
	cout << maxt; cout << endl;
	return 0;
}
