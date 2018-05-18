// Problem:   Number by 3 (eolymp 919)
// Link:      https://eolymp.com/problems/919
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-18 20:07 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double n , a[1000] , k = 0 , ko = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int i = 0 ; i < n ; i++){
		if((i+1) % 3 == 0 && a[i] > 0){
			ko += a[i];
			k++;
		}
	}
	cout << k << " " << fixed << setprecision(2) << ko << endl;
	return 0;
}
