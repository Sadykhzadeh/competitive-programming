// Problem:   Sum and product 3 (eolymp 8603)
// Link:      https://eolymp.com/problems/8603
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-16 14:22 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;
int n;
int main(){cin >> n;cout << n/100 + n / 10 % 10+ n % 10 << ' ' << (n/100)*(n/10%10)*(n%10)<<endl; return 0;}
