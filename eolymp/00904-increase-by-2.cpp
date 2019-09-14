// Problem:   Increase by 2 (eolymp 904)
// Link:      https://eolymp.com/problems/904
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-09-14 11:24 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , a[10000];
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int i = 0 ; i < n ; i++){
		if(a[i] >= 0 ){
			a[i]+=2;
		}
	}
	for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
 	return 0;
}
