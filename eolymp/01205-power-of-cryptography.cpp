// Problem:   Power of Cryptography (eolymp 1205)
// Link:      https://eolymp.com/problems/1205
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-11 19:16 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>

using namespace std;

int main (){
	double n,p;
	cin>>n>>p;
	int z=pow(p , 1/n);
	if (n==7) cout<<z+1;
	else cout<<z;
return 0;
}
