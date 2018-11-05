// Problem:   Fibonacci strings generation (eolymp 8295)
// Link:      https://eolymp.com/problems/8295
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-05 18:57 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <string>

string func(ll a){
	if(a == 0) return "a";
	elif(a == 1) return "b";
	else return func(a-1) +  func(a - 2);
}

ll n;

int main(){
	cin >> n;
	cout << func(n);
	cout << endl;
	return 0;
}
