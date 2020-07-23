// Problem:   CodeForces 230B
// Link:      https://codeforces.com/problemset/problem/230/B
// Language:  GNU G++17 7.3.0
// Submitted: 2020-07-23 08:15 UTC
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
