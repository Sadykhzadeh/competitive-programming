// Problem:   Sum without maximum (eolymp 7831)
// Link:      https://eolymp.com/problems/7831
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-18 08:45 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , a[10000];
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	int max = -1000;
	for(int i = 0 ; i < n ; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	int sum = 0 ;
	for(int i = 0 ; i < n ; i++){
		if(a[i] != max) sum += a[i];
	}
	cout << sum << endl;
	return 0;
}
