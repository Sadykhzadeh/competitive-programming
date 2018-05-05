// Problem:   Windy weather (eolymp 5713)
// Link:      https://eolymp.com/problems/5713
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-05 13:04 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , a[10000];
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	int maxi = -1 , mini = 150;
	for(int i = 0 ; i < n ; i++){
		if( maxi < a[i]){
			maxi = a[i];
		}
	}
	for(int i = 0 ; i < n ; i++){
		if( mini > a[i]){
			mini = a[i];
		}
	}
	cout << maxi - mini;
	return 0;
}
