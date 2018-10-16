// Problem:   The square of sum (eolymp 955)
// Link:      https://eolymp.com/problems/955
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-16 14:27 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;
int n;
int main(){cin >> n;cout << (n/1000+n/100%10+n/10%10+n%10)*(n/1000+n/100%10+n/10%10+n%10)<<endl; return 0;}
