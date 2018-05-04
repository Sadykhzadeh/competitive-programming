// Problem:   The first element not greater than 2.5 (eolymp 907)
// Link:      https://eolymp.com/problems/907
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-04 19:42 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int i , n , q , j;
    float a[100];
	cin >> n;
	for(i = 0; i < n ; i++) cin >> a[i];
	q = 1;
	for( i = 0 ; i < n ; i++ ){
	if (a[i] <= 2.5){
	cout << i + 1 << " " << fixed << setprecision(2) << a[i] << endl;
	q = 0; 
	break;
	}
	}
	if (q == 1) cout << "Not Found" << endl;
	return 0;
}
