// Problem:   Swap the digits in two-digit integer (eolymp 8601)
// Link:      https://eolymp.com/problems/8601
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-16 14:20 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;
int n;
int main(){cin >> n;cout << (n % 10)*10 + n / 10<<endl; return 0;}
