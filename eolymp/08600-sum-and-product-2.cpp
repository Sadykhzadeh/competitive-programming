// Problem:   Sum and product 2 (eolymp 8600)
// Link:      https://eolymp.com/problems/8600
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-16 14:19 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;
int n;
int main(){cin >> n;cout << n / 10 + n % 10 << ' ' << (n/10)*(n%10)<<endl; return 0;}
