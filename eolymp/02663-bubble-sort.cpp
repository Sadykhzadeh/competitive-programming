// Problem:   Bubble sort (eolymp 2663)
// Link:      https://eolymp.com/problems/2663
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-05-18 19:57 UTC
// Verdict:   Accepted

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, a[10000] , k = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = n - 2; j >= i; j--){
			if(a[j] > a[j+1]){ swap(a[j] , a[j+1]); k++;}
		}
	}
	cout << k << endl;
	return 0;
}
