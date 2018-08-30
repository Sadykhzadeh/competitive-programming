// Problem:   T-primes (Codeforces 230B)
// Link:      https://codeforces.com/contest/230/problem/B
// Rating:    1300   Tags: binary search, implementation, math, number theory
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-08-30 08:06 UTC
// Verdict:   Accepted

using namespace std;

#include <iostream>
#include <cmath>

int n;
double x1;
long long x;

int prov(int n);

int main(){;
	cin >> n;
	for(int i = 0; i < n; i++){
        cin >> x;
		x1 = sqrt(x);
		if(x1 == (int)x1 && prov(x1) == true && x != 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

int prov(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
