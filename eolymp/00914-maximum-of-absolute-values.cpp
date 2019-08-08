// Problem:   Maximum of absolute values (eolymp 914)
// Link:      https://eolymp.com/problems/914
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-08 14:47 UTC
// Verdict:   Accepted

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double n;
	cin >> n;
	double a[1000];
	for(int i = 0 ; i < n ; i++){ cin >> a[i]; if(a[i] < 0) a[i] = -(a[i]);}
	double max = -1;
	for(int i = 0 ; i < n ; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	cout << fixed << setprecision(2) << max << endl;
	return 0;
}
