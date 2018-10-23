// Problem:   Conditional statement - 3 (eolymp 8526)
// Link:      https://eolymp.com/problems/8526
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-23 14:24 UTC
// Verdict:   Accepted

#include <iostream>

using namespace std;

int main(){int n;cin>>n;if(n<-4)cout<<n+5;else if(n>=-4&&n<=7)cout<<n*n-n*3;else cout<<n*n*n+2*n; return 0;}
