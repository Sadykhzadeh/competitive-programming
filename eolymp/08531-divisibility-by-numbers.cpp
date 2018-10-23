// Problem:   Divisibility by numbers (eolymp 8531)
// Link:      https://eolymp.com/problems/8531
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-23 13:56 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int a, b, c;

int main(){cin>>a>>b>>c;if((a%b==0)&&(a%c==0))cout << "YES"; else cout << "NO";}
