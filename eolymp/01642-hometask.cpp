// Problem:   Hometask (eolymp 1642)
// Link:      https://eolymp.com/problems/1642
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-11-13 13:43 UTC
// Verdict:   Accepted

typedef unsigned long long ll;
#define elif else if
#define pb push_back

using namespace std;

#include <iostream>
#include <cmath>

ll n;
bool hello = true;

int main(){
	cin >> n;
	if(n == 1) cout << "YES"<<endl;
	elif(n == 2) cout << "NO" << endl;
	elif(n == 3) cout <<"NO"<<endl;
	elif(n == 4) cout <<"NO" << endl;
	elif(n == 5) cout <<"NO"<<endl;
	else{
	for(ll i = 2; i*i <= n; i++){
		//cout << n % i << endl;
		if(n % i == 0){hello = false; break;}
	}
	if(hello == false) cout << "YES" << endl;
	else cout << "NO" << endl;
	}
	return 0;
}
