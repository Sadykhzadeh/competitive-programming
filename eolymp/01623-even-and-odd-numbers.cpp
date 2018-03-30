// Problem:   Even and odd numbers (eolymp 1623)
// Link:      https://eolymp.com/problems/1623
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-03-30 03:46 UTC
// Verdict:   Accepted

#include <iostream>
using namespace std;

int main() {
	int a[3];
	int k=0, c=0;
	cin >> a[0] >> a[1] >> a[2];
	for( int i = 0 ; i < 3 ; i++){
		if(a[i]%2==0) k+=1;
		if(a[i]%2==1) c+=1;
	}
	if (k>0 && c>0) cout<<"YES";
	else cout<<"NO";
	return 0;
}
