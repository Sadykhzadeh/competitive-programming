// Problem:   Powers of two (eolymp 4208)
// Link:      https://eolymp.com/problems/4208
// Language:  C++ 20 (gnu 14.2)
// Submitted: 2018-04-09 22:14 UTC
// Verdict:   Accepted

#include <bits/stdc++.h>

using namespace std;

int main(){
int n1 , n2;
cin >> n1 >> n2; 
n1--;
 int d1 =n1*log10(2.0) + 1;
 int d2 =n2*log10(2.0) + 1;

cout << d2 - d1;
}
