// Problem:   Simple problem (eolymp 1)
// Link:      https://eolymp.com/problems/1
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-10-16 14:15 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
int n , a ,b ;
cin >> n;
a = n % 10;
b = n / 10;
cout << b << " "<< a << endl;
return 0;
}
