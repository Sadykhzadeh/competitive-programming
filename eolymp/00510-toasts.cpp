// Problem:   Toasts (eolymp 510)
// Link:      https://eolymp.com/problems/510
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-13 13:47 UTC
// Verdict:   Accepted

typedef unsigned long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cmath>

ll n,k, answer;

int main(){
	cin >> n >> k;
	if(n == 0) answer = 0;
	elif(n <= k) answer = 4;
	elif(!((n*2)%k)) answer = 2 * ((n*2) / k);
	else answer = 2 * (1 + (n*2) / k);
	cout << answer << endl;
	return 0;
}
