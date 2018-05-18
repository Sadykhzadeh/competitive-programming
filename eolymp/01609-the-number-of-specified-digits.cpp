// Problem:   The number of specified digits (eolymp 1609)
// Link:      https://eolymp.com/problems/1609
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-18 20:00 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a , b , k = 0;
	cin >> a >> b;
	a = abs(a);
	while(a){
		int temp = a % 10;
		if(temp == b){
			k++;
		}
		a/=10;
	}
	cout << k << endl;
	return 0;
}
