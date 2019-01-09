// Problem:   Square (eolymp 124)
// Link:      https://eolymp.com/problems/124
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-01-09 07:57 UTC
// Verdict:   Accepted

#include <iostream>

#define ll long long

using namespace std;

ll a, b;

int main(){
	while(cin >> a){
		cout << a*4 << " " << a*a << endl;
	} 
	return 0;	
}
