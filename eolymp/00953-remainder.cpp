// Problem:   Remainder (eolymp 953)
// Link:      https://eolymp.com/problems/953
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-16 14:25 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;
int n;
int main(){cin >> n;cout << (n%10)%(n/100)<<endl; return 0;}
