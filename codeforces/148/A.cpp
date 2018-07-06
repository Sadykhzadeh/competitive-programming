// Problem:   Insomnia cure (Codeforces 148A)
// Link:      https://codeforces.com/contest/148/problem/A
// Rating:    800   Tags: constructive algorithms, implementation, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-07-06 16:35 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){
	int a , b , c , d , e, n(0);
	cin >> a >> b >> c >> d >> e; n = e;
	if(a == 1 || b == 1 || c == 1 || d == 1){cout << n << endl;}
	else{
		for(int i = 1 ; i <= e; i++){ if((i%a != 0) && (i%b != 0) && (i%c != 0) && (i%d != 0))  n--; }
		cout << n << endl;
		}
}
