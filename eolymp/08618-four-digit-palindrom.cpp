// Problem:   Four-digit palindrom (eolymp 8618)
// Link:      https://eolymp.com/problems/8618
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2019-08-09 20:05 UTC
// Verdict:   Accepted

typedef long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>

int n;

int main(){
	cin >> n;
	if(n / 1000 == n % 10 && (n / 10) % 10 ==( n / 100 )% 10) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
