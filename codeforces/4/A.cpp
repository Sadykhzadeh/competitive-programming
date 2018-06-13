// Problem:   Watermelon (Codeforces 4A)
// Link:      https://codeforces.com/contest/4/problem/A
// Rating:    800   Tags: brute force, math
// Language:  C++14 (GCC 6-32)
// Submitted: 2018-06-13 11:04 UTC
// Verdict:   Accepted

#include <iostream>
#include <cmath>
#define elif else if
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n % 2 == 0 && n != 2) cout << "YES";
	else cout << "NO" << endl;
}
