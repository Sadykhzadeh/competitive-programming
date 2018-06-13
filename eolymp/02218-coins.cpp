// Problem:   Coins (eolymp 2218)
// Link:      https://eolymp.com/problems/2218
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-06-13 10:51 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
#define elif else if
using namespace std;

int main(){
	int  n , a , cnt = 0 , cnt2 = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		if(a == 1) cnt++;
		elif (a == 0) cnt2++;
	}
	cout << min(cnt , cnt2) << endl;
	return 0;
}
