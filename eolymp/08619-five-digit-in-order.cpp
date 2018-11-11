// Problem:   Five-digit in order (eolymp 8619)
// Link:      https://eolymp.com/problems/8619
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-11 08:30 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

int n;

int main(){
	cin >> n;
	if(n/10000 < n / 1000 % 10 && n / 1000 % 10 < n / 100 % 10 && n / 100 % 10 < n / 10 % 10 && n / 10 % 10 < n % 10){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	return 0;
}
