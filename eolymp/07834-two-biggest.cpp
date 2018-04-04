// Problem:   Two biggest (eolymp 7834)
// Link:      https://eolymp.com/problems/7834
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-04 03:51 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	long long  n , a[100] , p;
	cin >> n;
	for(long long i = 0 ; i < n ; i++) cin >> a[i];
	long long  max = -10000 , max2 = -10000;
	for(long long i = 0 ; i < n ; i++){
		if( max < a[i] ){
			max = a[i];
			p = i;
		}
	}
	a[p] = -101;
	
	for(long long i = 0 ; i < n ; i++){
		if( max2 < a[i] ){
			max2 = a[i];
		}
	}
	
	int sum = max + max2;
	cout << sum << endl;
	return 0;
}
